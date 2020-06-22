#include<stdio.h>
//remove nearby duplicate number
void main()
{
	int a=122344512,i=0,m;
	
	int b[10],j;
	
	while(a)
	{
		b[i]=a%10;	
		i++;
		a=a/10;		
	}
	for(j=i-1;j>=0;j--)   //j<=sizeof(b)/4  eQUAL FOR COMPARE LAST NUMBERS  i-1 for start from 7th b array index
	{
		if(b[j]!=b[j-1])
		{
			printf("%d",b[j]);	
		}
	}
	


//int i,j;
//
//for(i=0;i<10;i++)
//{
//	for(j=0;j<10;j++)
//	{
//		if(j==5)
//		{
//			break;
//		}
//	}
//printf("%d ",i);	
//}

}
