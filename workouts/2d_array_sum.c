#include <stdio.h>
void sum_array(int ,int );
void display(int);
void main()
{
	int i,j;
	
	int sum[2][2];
	
	int a[2][2]={
	             {1,2},
	      		 {3,4}
				};
				
	int b[2][2]={1,2,3,4};

//	int a[2][2];
//	int b[2][2];
//	
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//		
//	}
//	for(i=0;i<2;i++)
//	
//	{
//		for(j=0;j<2;j++)
//		{
//			scanf("%d",&b[i][j]);
//		}
//		
//	}
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			sum_array(a[i][j],b[i][j]);
//		}
//		printf("\n");
//		
//	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}

		
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			display(sum[i][j]);
		}
		printf("\n");		
	}
	
}
//void sum_array(int a,int b)
//{
//	int i,j,sum;	
//
//	sum=a+b;
//	
//    display(sum);
//	
//	
//}
void display(int a)
{
	printf("%d ",a);
}
