#include<stdio.h>

//semi-prime numbers with tables

void main()
{
	
int i,j,x;

for(i=2;i<100;i++)
{
	int count=0;
	
    for(j=2;j<=10;j++)
    {
        for(x=2;x<=10;x++)
        {
            if(j*x == i)
            {
                count++;
                break;
            }
            
            else if(j*x >i )
            {
                break;
            }
        }
    }
    
    if(count!=0 && count <3)
    {
    	printf("%d ",i);
	}
}
 

}
