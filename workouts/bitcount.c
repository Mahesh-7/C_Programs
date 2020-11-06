#include<stdio.h>
void main()
{
	int n,i,a,b,c = 0;
	printf("enter a num");
	scanf("%d",&n);
	printf("little endian\n");
	printf("\n");
	for(i=0;i<8;i++)
	{
	a=n&(1<<i);
	
		printf("%d ",a);

	if(a>0)
	{
		c++;
	}
		
	}
		printf("\n");
		printf("big endian\n");
		printf("\n");
		for(i=7;i>=0;i--)
	{
			a=n&(1<<i);
			
		printf("%d ",a);
	}
		printf("\n");
		printf("count\n");
	
	printf(" %d\n",c);

	

}
