#include<stdio.h>
//bubble sort and duplicate remove
void swap(int a[]);
int n,k=0;
int b[5];
void main()
{
	int a[5]={2,2,2,3,3};

	swap(a);
	

}
void swap(int a[])
{
	int i,j,t;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		
			if(a[j]>a[j+1])
			{
								
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				
			}
		}
			
	}

	for(i=0;i<5;i++)
	{
	
		if(a[i]!=a[i+1])
		{
		    
		    b[k++]=a[i];
		    n++;
		    
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
}
