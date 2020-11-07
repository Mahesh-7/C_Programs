#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[]={1,2,3,4},i=0;
	int *p=(int*)&a;
	
	for(i=0;i<8;i++)
	{
		if(i==0)
		{
			p=malloc(32);
		}
		if(i>3)
		{
			*(p+i)=(i+1);
			//printf("%d",i+1);
		}
		else
		{
			*(p+i)= a[i];
		}
		
		//printf("%d",*(p+i));
		
	}
	
	for(i=0;i<8;i++)
	{
		printf(" %d",*(p+i));
	}
	return 0;
	
	
}
