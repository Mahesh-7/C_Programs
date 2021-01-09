
//bit count
//bit range set
//bit swap
//bit reverse
//bit little endian,big endian
//bit odd,even
//bit positive ,negative
//bit power of 2 found



#include<stdio.h>

#define is_bit_negative(n) (1+(n>>31)-(-n>>31))

//bit positive ,negative
int main()
{
	int bit=1;  
	
//	printf("%d",bit);

	if(!is_bit_negative(bit))  //negative 0
	{
		printf("%d is negative",(bit));
	}
	
	else if(is_bit_negative(bit)==2)  //positive 2
	{
		printf("%d is positive",(bit));
	}
	else   //zero 1
	{
			printf("%d is zero",(bit));
	}
	
return 0;
	
}
