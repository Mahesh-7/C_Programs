#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}

void main()
{
	int i,x;
  for (i=0;i<=5;i++)
    {
  	  if(i==3)
  	  {
  	  	//break;
  	  	//continue;
  	  	//goto jump;
  	  	//return //for function
  	  	x=add(5,6);
  	  	printf("%d",x);
  	  	break;
		}
		
		printf("%d\n",i);
		
	 }	
	 //jump:
			//printf("end");
}
