#include <stdio.h>
#include <string.h>
void sum(int*);
int a[5],i;
void main()
{
	
//	int b[5]={1,2,3,4,5};
	
	for(i=0;i<sizeof(a)/4;i++)
	{
	
	//printf("%d\n",b[i]);
	
	scanf("%d",&a[i]);
}
	
	sum(&a);
}
void sum(int*p)
{
	int sum=0;
	for(i=0;i<5;i++)
	sum=sum+a[i];
	
printf("%d\n",sum);
	
}




