#include<stdio.h>
#include<stdint.h>

void main()
{
	uint32_t a=10;
	const int *  const p =&a;
	int * ptr =(int *)&p;
	ptr=(int *)20;
	printf("%d",ptr);
	
	int  n;
	printf("\n%d\n",sizeof(n));
//	p=20;
	//	printf("%d",p);
}


/*

int * const p;  //cant change address,value change
int const * p;   //value cant change ,address change
const int * const p;  //cant change address,cant value change




volatile int p;
int * ptr =&p;
volatile int * ptr=&p;

volatile int * const p;


*/
