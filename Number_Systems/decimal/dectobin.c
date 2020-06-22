#include <stdio.h>
#include <string.h>
char dectohex(int dec)
{
	static char hex[32];    //20  
	static int i,j;
	
	while(dec!=0)
	{
		hex[i]=dec%2;
		dec=dec/2;
		
		if(hex[i] == 0  )
		{
			hex[i]=hex[i]+48;
		//	printf("%c",hex[i]);
		}
		else if(hex[i] == 1)
		{
			hex[i]=hex[i]+48;
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
		printf("%c",hex[j]);		
	}

	
	//printf(" %d",strlen(hex));
	//return &hex;
	
}

void main()
{
	int dec=43981;  //ABCD
	
	dectohex(dec);
	
	
	//printf("     %d",20%48);
	
	//printf("%X",dec);  //it converts decimal to hexadecimal
	
//	printf("%s",dectohex(dec));
}
