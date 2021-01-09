
//bit count
//bit range set
//bit odd,even
//bit positive ,negative
//bit power of 2 found
//bit little endian,big endian

//bit swap
//bit reverse


#include<stdio.h>

//bit little endian,big endian

void main()
{
	unsigned int bit=0x313233;  

	if(bit&0xff)
	{
		printf("%x little endian",bit&0xff);
	}	
	else
	{
		printf("%x big endian",bit&0xff);
	}

}
