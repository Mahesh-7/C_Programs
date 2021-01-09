#include <stdio.h>
#include <stdint.h>
#include "Sys_Command.h"
#include "Sys_Command_Debug.h"



// 0x28,0xD8 - Idle Mode
// 0x29,0xD7 - Test Mode
// 0x2A,0xD6 - Manual Mode.
// 0x2B,0xD5 - Auto Mode.
// 0X2C,0XD4 - Get Mode.T

// 0x2D,0XD3 - Serial
// 0X2E,0XD2 - Bluetooth
// 0X2F,0XD1 - GPRS
// 0X30,0XD0 - Get

unsigned char Decoded_Bytes[10] = { 0 };

unsigned char Mode[] = { 0x01,0x02,0x03/*Preceding Characters*/,0x7B,0X30,0X02,0x28,0xD8,0x7D/*null*/};

unsigned char Comm[] = { 0x01,0x02,0x03/*Preceding Characters*/,0x7B,0X30,0X02,0x2D,0xD3,0x7D/*null*/ };

unsigned char Ctrl[18];


void Debug_System_Ctrl_Cmd(void)
{
	unsigned char Time;

	unsigned char i;

	System_Command_UN Test;

	Test.Value.Mode = 3;
	Test.Value.Communication = 3;
	Test.Value.System_Stat = 0;
	Test.Value.System_Online_Stat = 1;
	Test.Value.Publish_Id = 1;

	Test.Value.RPM_Dispenser = 200;
	Test.Value.Status_Alarm = 1;
	Test.Value.Status_PC = 1;
	Test.Value.Direction_Feeder = 1;
	Test.Value.Status_Feeder = 1;
	Test.Value.Direction_Dispenser = 1;
	Test.Value.Status_Dispenser = 1;

	Test.Value.RPM_Feeder = 30;

	Test.Value.System_Ontime = 11;
	Test.Value.System_Offtime = 11;

	Test.Value.Quantity_Food_Rem = 101;

	Test.Value.System_Cycles = 99;

	/* Make remaining cycle as 5(data link escape in data bytes) */
	Test.Value.System_Cycles_Rem = 0;

	Test.Value.Reserved_1 = 0;

	Test.Value.Reserved_2 = 0;

	Ctrl[0] = 0x7B;

	Ctrl[1] = 0x32;

	Ctrl[2] = 0X0E;

	for (i = 3; i < 16; i++)
	{
		Ctrl[i] = Test.Bytes[i - 3];
	}

	Ctrl[i] = (~(Ctrl[3] + Ctrl[4] + Ctrl[5] + Ctrl[6] + Ctrl[7] + Ctrl[8] + Ctrl[9] + Ctrl[10] + Ctrl[11] + Ctrl[12] + Ctrl[13] + Ctrl[14] + Ctrl[15]) + 1) & 0xFF;

	Ctrl[i+1] = 0x7D;

	/*for (i = 0; i < 18; i++)
	{
		printf_s("%x\n", Ctrl[i]);
	}*/

	System_Command_Parser(Ctrl);

	System_Command_Execute();
}

void Debug_System_Ctrl_Display(void)
{
	printf_s("System Mode : %x\n",System_Command.Value.System_Mode);
	printf_s("System Comm : %x\n", System_Command.Value.System_Comm);
	(System_Command.Value.System_Stat) ? printf_s("System State On\n") : printf_s("System State Off\n");
	(System_Command.Value.System_Online_Stat) ? printf_s("System Online\n") : printf_s("System offline\n");
	printf_s("Pulish Id : %x\n",System_Command.Value.Publish_Id);


	printf_s("Dispenser RPM : %d\n",System_Command.Value.RPM_Dispenser);
	(System_Command.Value.Status_Alarm) ? printf_s("Status Alarm On\n") : printf_s("Status Alarm off\n");
	(System_Command.Value.Status_PC) ? printf_s("Status pc On\n") : printf_s("Status pc off\n");
	(System_Command.Value.Direction_Feeder) ? printf_s("Feeder Direction : Clock\n") : printf_s("Feeder Direction : Anti-Clock\n");
	(System_Command.Value.Status_Feeder) ? printf_s("Feeder : On\n") : printf_s("Feeder : Off\n");
	(System_Command.Value.Direction_Dispenser) ? printf_s("Dispenser Direction : Clock\n") : printf_s("Dispenser Direction : Anti-Clock\n");
	(System_Command.Value.Status_Dispenser) ? printf_s("Dispenser Status : On\n") : printf_s("Dispenser Status : Off\n");

	printf_s("Feeder RPM : %d\n", System_Command.Value.RPM_Feeder);

	printf_s("System On time : %d\n", System_Command.Value.System_Ontime);
	printf_s("System Off time : %d\n", System_Command.Value.System_Offtime);

	printf_s("Quantity of Food remaining : %d\n", System_Command.Value.Quantity_Food_Rem);

	printf_s("System cycles : %d\n", System_Command.Value.System_Cycles);

	printf_s("System cycles remaining : %d\n", System_Command.Value.System_Cycles_Rem);

	printf_s("Reserved Byte_1 : %d\n", System_Command.Value.Reserved_1);

	printf_s("Reserved Byte_2 : %d\n", System_Command.Value.Reserved_2);
}


