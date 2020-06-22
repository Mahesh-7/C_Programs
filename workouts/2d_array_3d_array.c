#include<stdio.h>

void display(int);

void main()
{
//	int i,j;
//	
//	int b[2][2];//2d array declaration 
//	
////int a[][];	//error coloum size should be write
//	
//	int a[2][2]={1,2,3,4}; //array initialization store at continues loc called matrix,collection of 1d array,size of array 2*2*4=16bytes
//	
//	for(i=0;i<2;i++)
//	{
//    	for(j=0;j<2;j++)
//		{
//			printf("%d ",a[i][j]); 	
//		}	
//		printf("\n");
//	}

	int i,j,k;
	
	int a[2][3][3];//3d array declaration 
	
//	int a[][][];//error coloum size should be write
	
//	int a[2][3][3]={1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1}; //array initialization store at continues loc called matrix,collection of 1d array&2d array ,size of array 3*3*2=18bytes  //**2-2d array size,3-row,and 3-coloumn
	
	
for(k=0;k<2;k++)
{
	for(i=0;i<3;i++)
	{
    	for(j=0;j<3;j++)
		{
			scanf("%d",&a[k][i][j]);
		}
	}
}
		
for(k=0;k<2;k++)
{
	for(i=0;i<3;i++)
	{
    	for(j=0;j<3;j++)
		{
			//printf("%d ",a[k][i][j]); 
			display(a[k][i][j]);	
		}	
		printf("\n");
	}
		printf("\n");
}  
	
}
void display(int a)
{
	
	printf("%d ",a); 	
	
}
