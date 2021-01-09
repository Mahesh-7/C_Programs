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

unsigned char byte=5;  // 0000 0101
unsigned char i=0;
	
//bit swap

int bit_swap(unsigned char *byte,unsigned char pos1,unsigned char pos2)
{
	if((((*byte)>>pos1)&1) != (((*byte)>>pos2)&1)  )	 // 0000 0101
	{
		
		(*byte)^=(1<<pos1);
		(*byte)^=(1<<pos2);
		printf("swapped\n");
		return *byte;
	}

	
	return *byte;
}

void swaped_bits(unsigned char byte)
{
	for(i=0;i<no_of_bits;i++)
	{
		printf("%d ",(byte>>i)&1);
	}
	
	printf("\n%d \n",byte);
}

int main()
{

	swaped_bits(byte);

	bit_swap(&byte,1,2);	
		
	swaped_bits(byte);

	return 0;
}
