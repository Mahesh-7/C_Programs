#include <stdio.h>
#include <string.h>
#include<stdint.h>

char Response[] = "sf asfdfsdf \"m1\": asdf2:3434 243(0 asd {\"m1\":101,\"m2\":50,\"state\":12}";

typedef struct motor
{
	unsigned int RPM_Dispenser;
	unsigned char RPM_Feeder:8;
	unsigned char State;
}Motor_State;

Motor_State Mstate;

int StoI(char *str)
{
	int Retval=0;
	while(*str)
	{
		Retval = (Retval * 10)+((*str)-0x30);
		str++;
	}
	return Retval;
}


void Json_Parser(unsigned char * Response)
{
	char * ResponseExpected[3]={
	
								"\"m1\"",
								"\"m2\"",
								"\"state\""
																
								};
								
	char * ResponseValue[3];	
	//char * str ;
	
	uint8_t i=0;
	Response=strstr(Response,"{");
	
	if(Response)
	{
			for(i=0;i<3;i++)
			{
				Response=strstr(Response,ResponseExpected[i]);
				while((*Response)!=':')
				{
					Response++;
				}
				Response++;
				ResponseValue[i]=Response;
				while((*Response)!=',' && (*Response)!='}')
				{
					Response++;
				}
				*Response='\0';
				Response= Response +1;
			}
			
			Mstate.RPM_Dispenser=StoI(ResponseValue[0]);
			Mstate.RPM_Feeder=StoI(ResponseValue[1]);
			Mstate.State=StoI(ResponseValue[2]);			
	}
	else
	{
		printf("json string not found!\n");
	}
	
}

void main()
{
	
		Json_Parser(Response);
		printf("Dispenser RPM: %d\n",Mstate.RPM_Dispenser);
		printf("Feeder RPM: %d\n",Mstate.RPM_Feeder);
		printf("Unit State: %d\n",	Mstate.State);
		
		
		char * ptr={"hello","hi"};
		printf("%c",*(ptr[0]+0));
	

}
