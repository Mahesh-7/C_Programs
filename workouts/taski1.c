#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
   
    // the number of temperatures to analyse
    int n,t;
    scanf("%d", &n);
     int i,a[n],min=a[0];

    for ( i = 0; i < n; i++) 
    {
        // a temperature expressed as an integer ranging from -273 to 5526
       
        scanf("%d", &t);
        a[i]=t;
    }
        
    
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    
	for(i=0;i<n;i++)
	{			
			if(a[i]==0)
			
			{
				min	 =0;
				break;
			}
			else if( (a[i]&(1<<7)) != 128 )
			{
				//printf("hi\n");
			//	printf("%d %d\n",a[i]&(1<<7),i);	
					if(min>a[i])
					{
						min=a[i];
							
					}	
			}
			else if( (a[i]&(1<<7)) == 128 )
			{
				//printf("hi\n");
			//	printf("%d %d\n",a[i]&(1<<7),i);	
					if(min<a[i])
					{
						min=a[i];
							
					}	
			}
			else
			{
				
			}
	}
	 		printf("%d\n",(min));
    

   // printf("result\n");

    return 0;
}
