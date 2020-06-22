#include<stdio.h>

void display(int);

void main()
{
	int trans[5][5];
	int i,j;
	int a[2][3];//array declaration
	
//	int b[2][3]={1,2,3,4,5,6};//array initialization
	int b[2][3]={{1,2,3},{4,5,6}};//array initialization
	
//	int c[2][];   //error becaz colum size should be mention
	int c[2][3];
	//printf("%d",b[0][1]); //&b[1] //&b[0][0]//&b//b   ->all address notations
	
//	//3d array
//	int x[2][3][2] = 
//    { 
//        { {0,1}, {2,3}, {4,5} }, 
//        { {6,7}, {8,9}, {10,11} } 
//    }; 
    
    for(i=0;i<2;i++)
    {
    	for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	    
    for(i=0;i<2;i++)
    {
    	for(j=0;j<3;j++)
		{
			display(a[i][j]);
						
			//printf("%d ",a[i][j]);
		}	
		printf("\n");
	}
    printf("after transpose matrix\n");  ///transpose of matrix
    
     for(i=0;i<3;i++)
    {
    	for(j=0;j<2;j++)
		{
			printf("%d ",a[j][i]);
			
		}	
		printf("\n");
	}
			
}

void display(int a)
{
	printf("%d ",a);
}

////              transpose matrix
//                   1 2 3
//                   4 5 6
////              after transpose
//
//                    1 4
//                    2 5
//                    3 6




