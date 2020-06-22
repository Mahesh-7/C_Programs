#include<stdio.h>

void main()
{
	int n,i,flag=0,c=0;
	
	scanf("%d",&n);

//	for(i=1;i<=n;i++)
//	{
//	  while(n/i==n && n/1==n)
//	  {
//	  		flag=1;
//	  		break;
//		 
//	  }
//		
//	}
	
	for(i=2;i<n;i++)
	{
			//printf("hii\n");
          //**********logic for not prime number******//
		if(n%i==0)
		{
			
			flag=1;
			break; 
		}
    }
    //	printf("%d",i);

	if(flag==0)
	{
	
		printf("prime number");
	}
	else
	{
		printf("not prime number");
	}

}
