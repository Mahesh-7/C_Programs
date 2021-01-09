#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "Sys_Command.h"

/******************************************************************************************************************************
 *												        Variable Definitions
 ******************************************************************************************************************************/

/*
 * This variable holds the system command values that is currently in effect. this variable's value may get changed
 * if a valid system command frame received.
 */
System_Command_UN System_Command;

/*
 * This variable holds the Id and DLC of received frame.
 */
static Message_Frame_ST Rx_Frame;

/*
 * This variable holds the data bytes of received frame.
 */
static unsigned char Rx_Bytes[14];

/*
 * This variable holds System Command frame reception status.
 */

static unsigned char System_Command_Status_MCU = FF_System_Command_Processed;


/******************************************************************************************************************************
 *												        Function Definitions
 ******************************************************************************************************************************/

void System_Command_Parser(unsigned char *Response)
{
	unsigned char Data_Index = 0;
	unsigned char DLE_Performed = 1;

	Response = strchr(Response, STX);

	Rx_Frame.Id = 0; Rx_Frame.DLC = 0;

	if (Response)
	{
		Response++;

		while ((*Response != ETX) || (DLE_Performed == 1))
		{
			if ((*Response == DLE) && (DLE_Performed == 0))
			{
				DLE_Performed = 1;
			}

			else if (Rx_Frame.Id == 0)
			{
				Rx_Frame.Id = *Response;
				DLE_Performed = 0;
			}

			else if (Rx_Frame.DLC == 0)
			{
				Rx_Frame.DLC = *Response;
				DLE_Performed = 0;
			}

			else if (Rx_Frame.DLC > Data_Index)
			{
				Rx_Bytes[Data_Index] = *Response;
				Data_Index++;

				if (Rx_Frame.DLC == Data_Index)
				{
					System_Command_Status_MCU = FF_System_Command_Updated;
					printf_s("Command Parsed successfully!\n");
				}
				DLE_Performed = 0;
			}

			Response++;
		}
	}

	else
	{
		/* Do nothing */
	}
}

void System_Command_Execute(void)
{
	if (System_Command_Status_MCU == FF_System_Command_Updated)
	{
		unsigned char Checksum, i, ReceivedByte;

		if ((Rx_Frame.Id == FF_Command_Frame_ID) && (Rx_Frame.DLC == FF_Command_Frame_DLC))
		{
			Checksum = (((~(Rx_Bytes[0] + Rx_Bytes[1] + Rx_Bytes[2] + Rx_Bytes[3] + Rx_Bytes[4] + Rx_Bytes[5] + Rx_Bytes[6] + Rx_Bytes[7] + Rx_Bytes[8] + Rx_Bytes[9] + Rx_Bytes[10] + Rx_Bytes[11] + Rx_Bytes[12])) + 1) & 0xFF);

			if (Checksum == Rx_Bytes[13])
			{
				for (i = 0; i < (FF_Command_Frame_DLC - 1); i++)
				{
					System_Command.Bytes[i] = Rx_Bytes[i];
				}

				System_Command.Value.System_Comm = System_Command.Value.Communication + FF_System_Comm_Offset;      

				System_Command.Value.System_Mode = System_Command.Value.Mode + FF_System_Mode_Offset;

				printf_s("Command Stored successfully !\n");
			}

			else
			{
				/* Do nothing */
			}
		}

		else
		{
			/* Do nothing */
		}

		/* Whether received id present or not reset the System_Command_Status_MCU */
		System_Command_Status_MCU = FF_System_Command_Processed;
	}
}

