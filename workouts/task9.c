#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
//http websites//
int main()
{
    char urlbar[201];
    fgets(urlbar, 201, stdin);
    int i;

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    
    for(i=0;i<201;i++)
    {
        if(urlbar[i]=='.')
        {
            
         printf("http://%s\n",urlbar);
         break;
        }
        if(urlbar[i]!='.')
        {
              printf("ftp://%s\n",urlbar);
              break;
        }
    }
   

    return 0;
}
