#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
//string comparision to give result pass or fail
int main()
{
    char key[501];
    scanf("%s",key);
    //fgets(key, 501, stdin);//hello  
    //strcpy(key,"hello");
   // printf("%s",key);
    int n,i,a[501];
    scanf("%d", &n); //number dont terminate by enter so we use fgetc
	fgetc(stdin);    //take newline(\n) as input char  // fflush for output buffer clear not for input buffer clear 
	char str[501];
    for (i = 0; i < n; i++)
	{        
        //fgets(str, 501, stdin);  //you  //are
      
	 	scanf("%s",str);
		a[i]=strcmp(key,str);
	}
	
	for (i = 0; i < n; i++)
	{  
        if(a[i]==0)
        {
        	printf("pass\n");     //
		//	break;	
		}
		else
		{
			printf("fail\n");	
		}
	}


    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    //printf("pass/fail\n");

    return 0;
}
