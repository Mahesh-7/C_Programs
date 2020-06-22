#include<stdio.h>
#include<string.h>


void main()
{
	long long int bin=1010101111001111;
	
	long int temp,i,j=0,count=0;
	
	static char hex[32];
	
	int hexdec[16]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111};
	
	while(bin!=0)
	{
		temp=bin%10000;
		
		for(i=0;i<16;i++)
		{
			if(temp == hexdec[i])
			{
				if(hexdec[i] <10)
				{
					hex[count++]=i+48;
					
					//printf("%c",i+48);
				}
				else if(hexdec[i] >=10)
				{
					hex[count++]=i+55;
					//printf("%c",i+55);
				}
			}
		}
		
		bin=bin/10000;
	}
	
	while(--count>=0)
	{
		printf("%c",hex[count]);
	}
}
