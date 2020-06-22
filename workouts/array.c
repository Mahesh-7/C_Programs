#include<stdio.h>
void func(int *);
void func2(int);
void main()
{
	//************normal variables*****************//
	int a=10;
	a=20;
	printf("%d\n",a);
	
	
	//****************1D array intro*****************//
	
	int c[20];//array declaration
//	int c[];//error
	//c[0]=1;//posible
//	c[]={1,2,3,4};//error
	int b[5]={1,2,3,4,5};//array initialization
	int i;
	for(i=0;i<5;i++)
	{
		func2(b[i]);
	}
	
//	int d[1]={1,2};//error
//	printf("%d\n",c[0]);//garbage value
//	printf("%d\n",b[0]);
//	printf("%d\n",d[1]);//1 cant access 2 becaz array size is 1
	
	//writing /input to array//         //reading to array//  //array to function??
	
	func(&b);
	
}

void func(int * b) //with pointer
{
	int i;	
    for(i=0;i<5;i++)
	printf("%d\n",b[i]);//*(b+i) //*(i+b) //a[i]  //i[a]  all are same 

}

void func2(int  b) //without pointer
{
	
	printf("%d\n",b);

}
