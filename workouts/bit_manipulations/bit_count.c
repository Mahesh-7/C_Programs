#include <stdio.h>

char i=0; //we cant use unsigned char for decrement operations 

unsigned char c=0,data=-155,bit=0;  //0000-01010


int IS_bit_set(int data)
{
	return (bit?1:0);
}


int main()
{     
  	for(i=7;i>=0;i--)  	
  	{
  		  		
  		bit=(data>>i)&1;
  		
  		printf("%d ",bit);
  		
  		if(IS_bit_set(bit))
  		{
  			++c;	
		}  		
	}
	
    printf("\ncount: %d ",c);
    
    return 0;
    
}


//bit count
//bit range set
//bit swap
//bit reverse
//bit little endian,big endian
//bit odd,even
//bit positive ,negative
//bit power of 2 found
//bit 


