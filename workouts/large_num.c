#include<stdio.h>

void main()
{
	int a,b,c;
//	a=5;b=2;c=3;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("a is larger value:%d",a);
	}
	else if(b>c && b>a)
	{
		printf("b is larger value:%d",b);
	}
	else
	{
		printf("c is larger value:%d",c);
	}
}
