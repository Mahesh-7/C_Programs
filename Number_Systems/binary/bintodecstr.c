#include<stdio.h>
#include<string.h>


void main()
{
	char * bin="10101111";
	
	int i=strlen(bin)-1;
	
	int power=1;
	
	int dec;
	
	while(bin[i]!='\0')
	{
	//	printf("%c",bin[i++]);
		if(bin[i] == '1')
		{
				//printf("%d",bin[i]-48);
				dec += (bin[i]-48 )*power;
		}
		power *= 2;
		
		i--;
	}

	printf("%d",dec);
	
}
