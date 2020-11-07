#include <stdio.h>

/* bitwise operator to get n bits */

unsigned getbits(unsigned int x, int p, int n);

void main()

{
	
	//printf("%d %d %d",getbits(5,5,4));
	printf("%d ",bitcount(15));
}


unsigned getbits(unsigned int x, int p, int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
}


/* bitcount: count 1 bits in x */
int bitcount(unsigned x)
{
	int b;
	for (b = 0; x != 0; x >>= 1)
		if (x & 01)
			b++;
	return b;
}

 //00000
//1000000




