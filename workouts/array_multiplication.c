#include <stdio.h>
#define n 3
//array/matrix multiplication
void main()
{
	int a[][n]={2,4,3,4};
	int b[][n]={1,2,1,3};
	
//	int a[][n]={2,4,1,3,4,1};//not posible in matrix multiplication      2*3  2*3==error
//	int b[][n]={1,2,1,1,3,1};//   possibility matrix should be           2*3  3*2==2*2
	
	int c[n][n];

	int i,j,k;
	
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	   {
	  		c[i][j]=0;
	  		
				for(k=0;k<n;k++)
				{
						c[i][j]+=a[i][k]*b[k][j];
				}
	   }
	}
				
					
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);                     //  6 	16
			                                          //   7 	18
		}
					
		printf("\n");
	}
		
	
	
}
