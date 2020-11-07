#include<stdio.h>

#ifdef AVR_32
typedef   int int_32;
#else
typedef long int_32 ;
#endif

//#define intptr int
//typedef int intptr;


#define value 	10, \
				20, \
				30 \
				


typedef char * charptr;

#define charptr char *

typedef int (*apfArithmatics[3])(int,int);

void AddTwoNumber(int a,int b)
{
	printf("added %d",a+b);
}
void SubTwoNumber(int a,int b)
{
	printf("\nsub %d",a-b);
}
void MulTwoNumber(int a,int b)
{
	printf("\nmul %d",a*b);
}

void main()
{
	apfArithmatics aArithmaticOperation = { AddTwoNumber,SubTwoNumber,MulTwoNumber };
	
	static volatile int i;
	
	int a[3]={value};
	
//	int * p =&a;
	
	//charptr p1="hello";

	//printf("%s ",p1);
	
	while(i<3)
	{
	//	aArithmaticOperation[i](7,6);
		printf("%d ",a[i]);
		//printf("%d ", *(p+i));   //not *p[i]
		i++;
	}
	
	
	
}
