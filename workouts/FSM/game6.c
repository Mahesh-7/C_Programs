#include<stdio.h>

//unpair number
int main()
{
	long long int a=13698791678,c=0,c1,mod[12];
	

	
	while(a)
	{
		mod[c]=a%10;
	//	printf("%d",mod[c]);
		c++;
		a=a/10;
		
	}
int x=0,y=0;
for(x=0;x<c;x++)
{
		c1=0;
		
		for(y=0;y<c;y++)
		{
		
			if(mod[x] == mod[y])
			{
				c1++;
			}
		}
		if(c1==1)
		{
			printf("%d \n",mod[x]);
		}
		//printf("%d %d\n",mod[x],c1);
	
	
}

	
	return 0;
}
