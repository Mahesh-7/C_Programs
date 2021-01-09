#include <stdio.h>

#include "Sys_Command.h"
#include "Sys_Command_Debug.h"

int main()
{
	//printf_s("Size of System_Command_ST : %d\n",sizeof (System_Command_ST));

	Debug_System_Ctrl_Cmd();

	Debug_System_Ctrl_Display();

	//getchar();
	return 0;
}
