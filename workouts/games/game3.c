#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int c1=0,c2=0,i=0,j=0,z=0,N=0,x;
    char dup1[65];
    char P[65];	//="dog";
    char Q[65];	//="god";
    
  	scanf("%d", &N);
  	
    for ( x = 0; x < N; x++)
    {

        scanf("%s%s", P, Q);

        while(P[i]!='\0')
        {
            if(P[i] >= 'a' && P[i] <= 'z')
            {
               dup1[c1]=P[i];
			   ++c1;  
            }i++;
        }
        while(Q[j]!='\0')
        {
        	for(z=0;z<c1;z++)
        	{
	        	if(Q[j] == dup1[z])
	            {
	                ++c2;
	            }
			}

			j++;
        }
        if(c1 == c2)
        {
        	printf("true\n");
        }
        else
        {
            printf("false\n");
        }
        c1=0;c2=0;i=0;j=0,z=0;
    }
 

    return 0;
}
