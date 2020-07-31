#include <stdio.h>
#include <string.h>
char dectohex(int dec)
{
	static char bin[32];    //20  
	static int i,j;
	
	while(dec!=0)
	{
		bin[i]=dec%2;
		dec=dec/2;
		
		if(bin[i] == 0  )
		{
			bin[i]=bin[i]+48;
		//	printf("%c",hex[i]);
		}
		else if(bin[i] == 1)
		{
			bin[i]=bin[i]+48;
		//	printf("%c",hex[i]);
		}
		i++;
	}
	int z=0;
	for(j=i-1;j>=0;j--)
	{
		if(z++%4==0)
		{
			printf(" ");
		}
		printf("%c",bin[j]);		
	}

	
	//printf(" %d",strlen(bin));
	//return &bin;
	
}

void main()
{
	int dec=43981;  //ABCD
	
	dectohex(dec);
	
	
	//printf("     %d",20%48);
	
	//printf("%X",dec);  //it converts decimal to hexadecimal
	
//	printf("%s",dectohex(dec));
}
