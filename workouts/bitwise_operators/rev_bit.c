#include <stdio.h>
#include <stdlib.h>

#define CHAR_BITS  8  // size of character

#define INT_BITS  ( sizeof(int) * CHAR_BITS)

/*
bitwise programs

bit set,clear,toggle,count bits.check bits,reverse bits,+ve -ve sign num find,same sign or opposite signs,odd or even,nibble swap,little endian/big endian,print bits


*/


//function print in binary format
void PrintInBinary(unsigned n)
{
	short int iPos;
	
	for (iPos = (INT_BITS -1) ; iPos >= 0 ; iPos--)
	{
	  (n & (1 << iPos))? printf("1"): printf("0");	
	}
	
}

//bit reversal function
unsigned int ReverseTheBits(unsigned int num)
{
    unsigned int count = (INT_BITS -1); 
    unsigned int tmp = num;         //  Assign num to the tmp 
	     
    num >>= 1; // shift num because LSB already assigned to tmp
    
    while(num)
    {
       tmp <<= 1;  //shift the tmp because alread have the LSB of num  
	      
       tmp |= num & 1; // putting the set bits of num
       
       num >>= 1; 
       
       count--;
    }
    
    tmp <<= count; //when num become zero shift tmp from the remaining counts
    
    return tmp;
}
 
int main()
{
    unsigned int data = 3514753564;
    unsigned int Ret = 0;
    
   // printf("Enter the number : ");
  //  scanf("%u",&data);
    
    printf("\n\nEntered Data is " );
    PrintInBinary(data);
    
    
    Ret = ReverseTheBits(data);
   
    printf("\n\nReverse Data is " );
    PrintInBinary(Ret);
    
	return 0;
	
}
