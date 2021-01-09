#ifndef _SYS_COMMANDS_H_
#define _SYS_COMMANDS_H_

/******************************************************************************************************************************
 *												      Preprocessor Constants
 ******************************************************************************************************************************/

/*
 *  Control Characters for Message Frames
 */

#define STX				   (unsigned char)0x7B  //Start of Text
#define ETX				   (unsigned char)0x7D  //End of Text
#define DLE				   (unsigned char)0x05  //Data link escape

/* Message ID for Control Command. */
#define FF_Command_Frame_ID         (uint8_t)0x32

/* Data Length code of Control Command Frame. */
#define FF_Command_Frame_DLC		(uint8_t)0x0E

/* System Mode Offset */
#define FF_System_Mode_Offset       (uint8_t)0x28

/* System Communication Offset */
#define FF_System_Comm_Offset       (uint8_t)0x2D

/*
 * System Mode related Constands
 */
#define FF_Mode_Idle   (uint8_t)0x28
#define FF_Mode_Test   (uint8_t)0x29
#define FF_Mode_Manual (uint8_t)0x2A
#define FF_Mode_Auto   (uint8_t)0x2B
#define FF_Mode_Get    (uint8_t)0x2C

 /*
  * System Communication related Constants.
  */
#define FF_Comm_Serial (uint8_t)0x2D
#define FF_Comm_BT     (uint8_t)0x2E
#define FF_Comm_GPRS   (uint8_t)0x2F
#define FF_Comm_Get    (uint8_t)0x30

/*
 *  Error Related Constants.
 */
#define FF_No_ERROR    (uint8_t)0x2D

/*
 *  Frame reception related constants.
 */
#define FF_System_Command_Updated    (uint8_t)0x00
#define FF_System_Command_Processed  (uint8_t)0xFF

/******************************************************************************************************************************
 *												          Typedefs
 ******************************************************************************************************************************/


/*
 * Structure definition for System Control Commands.
 */

typedef struct _System_Command_ST
{
	/* Byte - 1*/

	unsigned int Mode : 2;
	unsigned int Communication : 2;
	unsigned int System_Stat : 1;
	unsigned int System_Online_Stat : 1;
	unsigned int Publish_Id : 2;

	/* Byte - 2,3 */	

	unsigned int RPM_Dispenser : 10;
	unsigned int Status_Alarm : 1;
	unsigned int Status_PC : 1;
	unsigned int Direction_Feeder : 1;
	unsigned int Status_Feeder : 1;
	unsigned int Direction_Dispenser : 1;
	unsigned int Status_Dispenser : 1;

	/* Byte - 4 */
	unsigned int RPM_Feeder : 8;

	/* Byte - 5,6,7 */
	unsigned int System_Ontime : 12;
	unsigned int System_Offtime : 12;

	/* Byte - 8 */
	unsigned int System_Cycles : 8;

	/* Byte - 9,10 */
	unsigned int Quantity_Food_Rem : 16;

	/* Byte - 11 */
	unsigned int System_Cycles_Rem : 8;

	/* Byte - 12 */
	unsigned int Reserved_1 : 8;

	/* Byte - 13 */
	unsigned int Reserved_2 : 8;

	/* Byte - 14*/
	/* This byte is used to indicated whether this current data's are processed or not */
	unsigned int Padded_Byte_1 : 8; 

	/* Byte - 15*/  
	/* Mode can be stored in 6 bits */
	unsigned int System_Mode : 8;

	/* Byte - 16*/  
	/* Communication can be stored in 6 bits */
	unsigned int System_Comm : 8;

}System_Command_ST;


/*
 * Union definition for System Control Commands.
 */

typedef union System_Command_UN
{

	System_Command_ST	Value;
	unsigned char Bytes[16];

} System_Command_UN;


/*
 * Structure definition for Message Frame format.
 */

typedef struct _Message_Frame_ST
{

	unsigned char Id;
	unsigned char DLC;

}Message_Frame_ST;


/******************************************************************************************************************************
 *												        Variable Declarations
 ******************************************************************************************************************************/

 /*
  * This variable holds the system command values that is currently in effect. this variable's value may get changed
  * if a valid system command frame received.
  */

extern System_Command_UN System_Command;


/******************************************************************************************************************************
 *												        Function Declarations
 ******************************************************************************************************************************/

/*
 * @brief : To parse the received command bytes to a meaningfull frame. This function calls System command Execute function
 * @param : base address of received byte array.
 * @return: void.
 */

extern void System_Command_Parser(unsigned char *Response);


/*
 * @brief : This function checks whether the received message is valid or not. If valid it assigns received byte array to 
 *          System command byte array.
 * @param : void.
 * @return: void.
 */

extern void System_Command_Execute(void);


#endif //_SYS_COMMANDS_H_        