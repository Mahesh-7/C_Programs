#include <stdio.h>    ///   funct ptr lev 1

typedef void (*ptr)();

typedef struct 
{
	//void (*ptr)();   //func ptr 
	ptr msg;
	
	int a;	
	
}fun;

	//typedef int int_32;
	typedef long int_32;
	
void test()   
{
	printf("hello");
}

void main()
{
	fun p ;
//	p.ptr=&test;
//	p.ptr();
	p.msg=&test;
	p.msg();
	

	
	int_32 a=32;
	
	printf(" %d",a);


	
}
