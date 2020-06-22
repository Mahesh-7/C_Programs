#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//how many same number occurance in array denote by *

int main()
{
	int value [27] = {1,1,7,9,1,6,
					  8,4,7,6,3,2,
					  5,8,6,9,3,6,
					  5,8,7,5,7,1,9,3,6};
	static int r[9];
    int N,i, j;    
   
    for(i = 0;i<27;i++)    
    {   		
    	if(value[i] == 1)
    	{
    		
    		r[0]++;//
		}
		if(value[i] == 2)
    	{
    		r[1] += 1;
		}
		if(value[i] == 3)
    	{
    		r[2] =r[2]+ 1;
    		
		}if(value[i] == 4)
    	{
    		r[3] = r[3] + 1;//
		}
		if(value[i] == 5)
    	{
    		r[4] = r[4] + 1;
		}
		if(value[i] == 6)
    	{
    		r[5] = r[5] + 1;
		}if(value[i] == 7)
    	{
    		r[6] = r[6] + 1;
		}if(value[i] == 8)
    	{
    		r[7] = r[7] + 1;
		}
		if(value[i] == 9)
    	{
    		r[8] = r[8] + 1;
		}
	}


	for(i = 0;i<=8;i++)
	{
		printf("%d :",i+1);
		
		for(j = 0;j<r[i];j++)
		{
			printf("*");
		}
		
		printf("\n");
	}

}

