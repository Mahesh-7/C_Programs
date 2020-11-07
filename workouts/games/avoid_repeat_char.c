#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	int i=0,z=0,c=0;
    char MESSAGE[101]="bovvvvletvvvv";   /// vvv or vvvv  replaced by w
    //fgets(MESSAGE, 101, stdin);
    char * str =MESSAGE;
    char * ptr=malloc(1);
    char arr[30];
    
   for(;*str!='\0';str++)
    {
    	if(MESSAGE[i]=='v')
    	{
    	
    			MESSAGE[i]='w';
    			
    			i=i+2;
    			
    			if(MESSAGE[i]='v')
    			{
    				i=i+1;
				}
	
    		
		}
		
        if(*str == 'v')
        {        	
        	continue;
        }
        
       printf("%c",*str);
		arr[z++]=*str;
       i++;c++;
    }
    
    printf("\n  \n");
    
    int j=0;
    
    for(;j<c;j++)
    {
    	printf("%c",arr[j]);
    }

    return 0;
}




/*
int main()
{
	int i=0,c=0;
    char MESSAGE[101]="bovvvlet";
    //fgets(MESSAGE, 101, stdin);
    char * str =MESSAGE;
    char * ptr=malloc(1);
   for(;*str!='\0';str++)
    {
    	if(MESSAGE[i]=='v')
    	{
    	
    			MESSAGE[i]='w';
    			i=i+2;
    			if(MESSAGE[i]='v')
    			{
    				i=i+1;
				}
	
    		
		}
        if(*str == 'v')
        {
        	
        	continue;
        	//str++;
        }
        //*ptr='w';
       // str++;
        //*str='w';
        //break;
           printf("%c",*str);
      // str++;
      i++;
    }
    ///printf("%s",MESSAGE);
//	getch();
    return 0;
}

*/
