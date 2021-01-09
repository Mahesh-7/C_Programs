#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STX 0x7b
#define ETX 0x7d
#define DLE 0x7c

void encode_bytes();

unsigned char parse_aws_response(unsigned char * str);

typedef struct aws_response_st
{
	
	unsigned char stx;
	unsigned char id;
	unsigned char dlc;
	unsigned char bytes[15];  //include etx
	
}aws_response_st;


typedef union aws_response_un
{

aws_response_st response;
unsigned char bytes[18];

}aws_response_un;

aws_response_un aws_response;

char http_cmd_write[4][20]=
{
	"AT+HTTPDATA=6,10000",
	"7;3002xxxx7=",  //stx - id - dlc - data1 - checksum - etx - null.
	"AT+HTTPACTION=1",
	"AT+HTTPREAD"
};


int main()
{
	
	unsigned char i;
	//unsigned char Post[]="{7;3002xxxx7=}";
	unsigned char Response[] = "7;320>7<7;56;:183<<00360>:0:0000000:7="; //"7;300269977="; 
	
	if(parse_aws_response(Response))
	{
		for(i=0;i<18;i++)
		{
			printf("%x ",aws_response.bytes[i]);
		}
	}
	else
	{
		printf("\nparse failed\n");
		
	}
	
	encode_bytes();
	
	//getch();
	
	return 0;
}


unsigned char parse_aws_response(unsigned char * str)
{
	unsigned char responseParsed=0;
	unsigned char index=0;
	unsigned char value=0;
	unsigned char DLEperformed=0;
	
	aws_response.response.id=0;
	aws_response.response.dlc=0;	
	memset(aws_response.response.bytes,0,6);
	
	str=(unsigned char *) strstr((const char *)str,"7;");
	
	if(str)
	{
		aws_response.response.stx=STX;
		str+=2;
		value =( (*str-0x30)<<4)|((*(str+1))-0x30);
		
		while((value!=ETX ) && (index<14))
		{
			
			if((DLEperformed==0 )&& (value==DLE))
			{
				DLEperformed=1;
			}
			else if(aws_response.response.id==0)
			{
				aws_response.response.id=value;
				DLEperformed=0;
			}
			else if(aws_response.response.dlc==0)
			{
				aws_response.response.dlc=value;
				DLEperformed=0;
			}
			
			else if(aws_response.response.dlc>index)
			{
				aws_response.response.bytes[index]=value;
				index++;
				DLEperformed=0;
				
				if(index < aws_response.response.dlc)
				{
						responseParsed=1;
				}
			}			
			
			str+=2;
			value =( (*str-0x30)<<4)|((*(str+1))-0x30);
		}
		
		aws_response.response.bytes[index]=ETX;
		index=0;
		
	}

	return responseParsed;
}

void encode_bytes()
{
	unsigned char value=0;
	
	unsigned char checksum= (~(value)+1)+0xff;	
	
	value=0;
	
	checksum= (~(value)+1)+0xff;
	
	
	http_cmd_write[1][6]= (value>>4)+0x30;
	http_cmd_write[1][7]= (value&0x0f)+0x30;
	http_cmd_write[1][8]= (checksum>>4)+0x30;
	http_cmd_write[1][9]= (checksum &0x0f)+0x30;
	
	printf("%s",http_cmd_write[1]);
	
}




