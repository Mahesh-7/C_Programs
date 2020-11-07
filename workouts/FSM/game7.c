#include<stdio.h>
//missing number in integer value

int main()
{
	long long int a=102456789,c=0,c1,mod[12];

	
	while(a)
	{
		mod[c]=a%10;
	//	printf("%d ",v[c]);
		c++;
		a=a/10;
		
	}
	
int x=0,y=0;

for(x=0;x<10;x++)
{
		c1=0;
		
		for(y=0;y<c;y++)
		{
		
			if(x == mod[y])
			{
				c1++;break;
			}
		}
		if(c1==0)
		{
			printf("%d \n",x);
		}
	
	
	
}

	
	return 0;
}
