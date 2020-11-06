#include<stdio.h>
void main()
{
	int a;int b=1;int i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=i*b;
	}
	printf("ans=%d",b);
}
