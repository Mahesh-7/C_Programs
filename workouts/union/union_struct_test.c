#include<stdio.h>

volatile typedef struct test1

{
	unsigned char a:4;
	unsigned char b:3;
	union
	{
		unsigned char c:4;
		unsigned char d:4;
	};
	
}test_test;

typedef union test2
{
	//test mem;
	 struct 
	{
	unsigned char a:4;
	unsigned char b:3;	
	}test;

//	unsigned char c;
}test2;

void main()
{
	test2 mem2;
	mem2.test.a=10;
	printf("%d size:%d\n",mem2.test.b,sizeof(test2));
	
	test_test t;
	t.c=2;
	printf("%d",t.d);
	
	
}
