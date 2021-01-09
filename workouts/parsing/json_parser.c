#include <stdio.h>
#include <string.h>

char Response[] = "sf asfdfsdf asdf23434 243(0 asd {\"m1\":101,\"m2\":50,\"state\":12}";

typedef struct motor
{
	
	unsigned int DispenserRPM;
	unsigned char FeederRPM;
	unsigned char State;	
	
}motor_handle;

motor_handle SM_Atr;



int StoI(char * ptr)
{
	int Retval=0;
	
	if(*ptr>=0x30 && *ptr<0x39)
	{
		while(*ptr)
		{
			Retval = (Retval*10) + (*ptr-0x30);	ptr++;
		}
		
	}
	else
	{
		Retval=0;
	}
	
	return Retval;
}


void json_parser(char * str)
{
	char *Response[3];
	
	char * ResponseExpect[3]={ "\"m1\":101","\"m2\":50","\"state\":12"};
	
	unsigned char * ptr;
	
	int i;	
	
	str=strstr(str,"{");
	
	if(str)
	{		
		for(i=0;i<3;i++)
		{
			ptr=strstr(str,ResponseExpect[i]);
					
			if(ptr)
			{
				while(*ptr!=':')		
				{
					ptr++;
				}
				ptr++;
				
				Response[i]=ptr;
				
				while(*ptr!=',' && *ptr!='}')
				{
					ptr++;
				}		
				*ptr='\0';
				
				str=ptr+1;
			}	
				
			else
			{
				Response[i]=0;
			}
		}
		SM_Atr.DispenserRPM	=StoI(Response[0]);
		SM_Atr.FeederRPM	=StoI(Response[1]);
		SM_Atr.State		=StoI(Response[2]);
	}
	
	else
	{
		
		printf("json string not found");
	}
	
}


void main()
{
	
	json_parser(Response);
	
	printf("SM_Atr.DispenserRPM :%d\n",SM_Atr.DispenserRPM);
	printf("SM_Atr.FeederRPM :%d\n",SM_Atr.FeederRPM);
	printf("SM_Atr.State :%d\n",SM_Atr.State);
	
}
