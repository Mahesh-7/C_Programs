
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


unsigned char reverse_num = 0; 
 

unsigned char reverseBits(unsigned char num) 
{ 
	unsigned char NO_OF_BITS = sizeof(num) * 8; 
	
	unsigned char i=0; 
	
	for (i = 0; i < NO_OF_BITS; i++) 
	{ 
		if((num & (1 << i))) 
		{
			reverse_num |= 1 << ((NO_OF_BITS - 1) - i); 
		}
		
	} 
	
	return reverse_num; 
} 


unsigned char swapBits(unsigned char num,unsigned char pos1,unsigned char pos2) 
{ 

	
	if(  ((num>>pos1) & 1 )   !=   ((num>>pos2) & 1 ) ) 
		{
			num^=(1<<pos1);
			num^=(1<<pos2);
		}

	
	return num; 
} 

int main()
{
	unsigned char byte=5;
	
	printf("%u\n",reverseBits(byte)); /* bit rev */
	
	printf("%u\n",swapBits(byte,0,1));  /*bit pos swap */	
	
	return 0;
		
}
