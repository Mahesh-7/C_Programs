#include<stdio.h>

int fun()
{
	
	printf("hello");
	//return 2;
}


int main()
{
	
	int (*ptr)()=fun;
	ptr();
	
}
