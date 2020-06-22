#include <stdio.h>
#include <string.h>
char dectohex(int dec)
{
	static char hex[32];    //20  
	static int i,j;
	
	while(dec!=0)
	{
		hex[i]=dec%16;
		dec=dec/16;
		
		if(hex[i] >= 0 && hex[i] <= 9 )
		{
			hex[i]=hex[i]+48;
		//	printf("%c",hex[i]);
		}
		else if(hex[i] >= 10 && hex[i] <= 15)
		{
			hex[i]=hex[i]+55;
		//	printf("%c",hex[i]);
		}
		i++;
	}
	
	for(j=i-1;j>=0;j--)
	{
		printf("%c",hex[j]);		
	}

	
	//printf(" %d",strlen(hex));
	//return &hex;
	
}

void main()
{
	int dec=20;
	
	dectohex(dec);
	
	//printf("%X",dec);  //it converts decimal to hexadecimal
	
//	printf("%s",dectohex(dec));
}
