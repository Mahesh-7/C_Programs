
//bit count
//bit range set
//bit swap
//bit reverse
//bit little endian,big endian
//bit odd,even
//bit positive ,negative
//bit power of 2 found



#include<stdio.h>

//bit power of 2 found
void main()
{
	int a=255;
	
	int i=0,bit=0,bit_count=0;
	
	for(i=0;i<8;i++)	
	{
		//printf("%d ",(a>>i)&1);
		bit=(a>>i)&1;
		if(bit)
		{
			++bit_count;
		}

	}

	if(bit_count==1)
	{
		printf("%d is power of 2",a);
	}
	
	else
	{
		printf("%d is not power of 2",a);
	}
	

	
	
}
