#include<stdio.h>
void main()
{
int a,b,i,n;
scanf("%d",&n);
for(i=0;i<8;i++)
	{
	a=n&(1<<i);
	
		printf("%d ",a);
	}
		printf("\n");
a=((n&0x0f)<<4)|((n&0xf0)>>4);
	printf("%d ",a);
	printf("\n");
	for(i=0;i<8;i++)
	{
	b=a&(1<<i);
	
		printf("%d ",b);
	}
}




