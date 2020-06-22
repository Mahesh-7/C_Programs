#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//password match atleast one numer(0-9) ,a-z,A-Z
int main()
{
    char S[101];
    fgets(S, 101, stdin);
    int l=strlen(S);
  //  printf("%d\n",l);
    int i;
    int z[4],x,y,u,v;
 
 if(l>8)
 {
 
    for(i=0;i<l;i++)
    {
    	if(S[i]>=65 && S[i]<=90 )
    	{
    		z[0]=1;x=1;
    		//	printf("1\n");
		}
		else if( S[i]>=97 && S[i]<=122 )
		{
				z[1]=1;y=1;
				//	printf("2\n");
		}
		else if( S[i]>=48 && S[i]<=57)
    	{
    			z[2]=1; u=1;  //	printf("%c",S[i]);
    				//printf("3\n");
		}
		else
		{
				z[3] =1;v=1;
				//	printf("4\n");
		}
		
	}
	
	if(	(z[0]+z[1]+z[2]+z[3])==4)
//	if((x+y+u+v)==4)
	{
		printf("password strength is good\n");
	}
	else
	{
		printf("password strength is poor\n");
	}
	    
}
else
{
	printf("please enter password atleast 8 characters");
}
    return 0;
}


