#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

///problem :  sum of even array index include 0  subtract from sum of odd index

/*  input           output

	12489  			14(even_pos_include_0_position)-10(odd_pos)= 4
	124897          14-17= -3
	1				1

*/

int c1=0;

int value_update(int count)
{
	int i,val=10;

//looping method 

	//for(i=0;i<count-2;i++)
	//{
	//	val*=10;
	//}
	////printf("\n%d\n ",val);
	//return val;

//recursion  method

	if(count==1)
	{
		return 1;
	}
	else
	
	{
		return val*value_update(count-1);
	}

}


int main()
{
    int N=12,c=0,i=0,odd=0,even=0,mod=0,j=0,temp=N;
    int arr[100];
    //scanf("%d", &N);
    while(N!=0)
    {
        ++c1;
        N=N/10;    
      
    }
    
    N=temp;
        
//printf("\n%d\n ",value_update(c1));
j=value_update(c1);
//printf("\n%d\n ",j);

    while(N!=0)
    {
        
        mod=N/j;
        arr[c]=mod;
       // printf("%d ",arr[c]);
        ++c;
        N=N%j;
        j=j/10;
      
    }
 //  printf("\n");
    while(i<c)
    {
    //	printf("%d ",arr[i]);
        if((i%2 == 0) || i==0  )
        {
            even=even+arr[i];
            //printf("%d ",arr[i]);
        }
        else if(i%2 !=0)
        {
            odd=odd+arr[i];
           // printf("%d ",arr[i]);
        }
        i++;
    }
	 printf("%d ",even-odd);

    return 0;
}
