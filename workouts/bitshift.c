#include<stdio.h>
void main()
{
	int n,i,a,c;
	scanf("%d",n);
	for(i=0;i<8;i++)
	{
	a=n&(1<<i);	
	if(a>1)
	{
		c++;
	}
	}
printf("%d",c);	
}
