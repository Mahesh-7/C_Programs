	#include<stdio.h>
	#include<inttypes.h>
//static int x;

int main()
{


//	static const int a;
//	static volatile int b;
//	printf("%d %d",a,b);
	const  volatile char  *arr="hello"; 
	volatile  int p1=5;
	int const volatile* const p=&p1;
	//*p=10;  //if const use data cant change ,and address cant use
	//printf("%d",*p);
//	arr[0]='a';   //if const or pointer(.text) use data cant change ,and address cant use
	//printf(" %s",arr);
	
//	char z=129;
//	printf(" %d",z);

 //static int x=10;  // local/ global variable 
int r = 1;
//static int x;
 goto ram; 
ram:
{
	//extern int y;
	static int x=5; //local variable	
	printf("%d\n",x);
	x++;	
	if(x==10)
	{
	//	break;
	}	
}


if(r!=2 )
{
	r++;
	
	goto ram;	
}

//printf("	mem=%d",x);

	//uint32_t volatile p2=11;
//	printf(" %d",p2);
	
	return 0;
}
/*
#define PORTA  6356632

void main()

{
	uint32_t volatile value=100;
	
	uint32_t volatile * const portReg=(uint32_t*)PORTA;
	
//	*portReg=value;
	
	printf("%d",*portReg);
	
}*/
