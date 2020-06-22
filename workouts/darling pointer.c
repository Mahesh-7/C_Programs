#include <stdio.h>
#include <stdlib.h>
int func();
//darling ponter
void dangling_ptr()
{
	int *p ;
	p=func();
	fflush(stdin);
	printf("dangling ptr:%d\n",*p);
}
int func()
{
	 int a=5;          //to avoid dangling ptr use static variables
//	printf("%d\n",&a);
	return (&a);
}


//dangling ptr store stack memory address its life is within block if it comes out the memory address will be erase  
//if we use static variable it will be datasegment memory it wont erase when come out of block.
