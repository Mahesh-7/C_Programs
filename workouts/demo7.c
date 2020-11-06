#include<stdio.h>
int func1();
int func2();

void main()
{
	
printf("%d\n",func1());
int a=func1();
printf("%d\n",func2(a));
}
func1()
{
int a=10;
return a;
}
func2(int x)
{
	int b=x+10;
    return b;
}
