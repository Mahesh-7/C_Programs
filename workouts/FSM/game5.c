#include<stdio.h>
//series greater numbers   1<2<3 true

int main()
{
	int a=123,c=0,mod[12];
	
	
	int r=a%10;
	
	int n=a/10;
	
	while(n)
	{
		if (r >= (n%10))
		{
			c=1;
		}
		else
		{
			c=0;break;
		}
		
		r=n%10;
		n=n/10;
		
	}
	if(c) 
	{
		printf("true");
	}
	
	else 
	{
		printf("false");
	}
	
	
	
	
	
	/*
	
	while (a)
	{
		mod[c]=a%10;
		a=a/10;	
		printf("%d ",mod[c]);	
		c++;
		
	}
	int x=0;
	for(x=0;x<c-1;x++)
	{
		if(mod[x] >= mod[x+1])
		{
			if(x==c-2)
			{
				printf("true");
			}
		}
		else
		{
			printf("false");break;
		}
	}
	*/
	
	
	return 0;
}
