#include<stdio.h>
void main()
{
unsigned int n,i,a,b,c = 0;
	printf("enter a num");
	scanf("%d",&n);
	for(i=0;i<8;i++)
	{
	a=n&(1<<i);

	if(a>0)
	{
		c++;
	}	
	}
	
	if(c==1)
	{
		printf("%d is power of 2",n);
	}
	else printf("no");


	

}
