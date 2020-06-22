#include<stdio.h>

void main()
{
	int a,b,c,d;
	a=1;b=2;c=3,d=1;
	
	if(a<b && b>c)
	{
		printf("if");
	}
	
	
	if(a%d==0 && b<c)
	{
    	printf("if 2");	
    	if(!0)
    	{
    		printf("hello");
		}
		
		else if(1)
		{
			printf("hi");
		}
	}
	
	
	else if(a<b || b>c)
	{
		printf("else if");
	}
	
	
	else 
	{
		printf("else ");
	}
}
