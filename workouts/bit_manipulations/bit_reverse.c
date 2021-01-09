
//bit count
//bit range set
//bit odd,even
//bit positive ,negative
//bit power of 2 found
//bit little endian,big endian
//bit reverse

//bit swap
#include<stdio.h>

#define no_of_bits (sizeof(char)*8)

unsigned char byte=5,temp=0;  // 0000 0101
unsigned char i=0;
	

//bit reverse

int bit_reverse(unsigned char byte)
{
		
	for(i=0;i<no_of_bits;i++)
	{
		if(byte&(1<<i))
		{
			
			temp|=(1<<((no_of_bits-1)-i));

		}		

	}
	
	return temp;
}

void reversed_bits(unsigned char temp)
{
	for(i=0;i<no_of_bits;i++)
	{
		printf("%d ",(temp>>i)&1);
	}
	
		printf("\n%d \n",temp);
}

int main()
{

	reversed_bits(byte);

	bit_reverse(byte);
	
	reversed_bits(temp);

	return 0;
}
