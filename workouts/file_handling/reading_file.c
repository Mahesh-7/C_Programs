#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = NULL;
    char msg[100];
    char msg1[100];
    char msg2[100];
    
    int ch=0;

    //create a text file
    fp  = fopen ("G:/MAHESH/AZE/AZE_class/c_pro_tasks/c_class_progams/file_handling/file_handler.txt", "r");
    
    if(fp == NULL)
    {
        printf("File is not created\n");
        //exit(1);
    }
    else
    {
        printf("File is created\n"); 
        
        		
	////////////////////////////////////////////////	
		//read string 
	        fscanf(fp,"%s",msg2);
	        puts(msg2); 
      
		printf("\n");
///////////////////////////////////////
		//read file 2
	    while( (ch=fgetc(fp)) != EOF)
        {
        	//read char 
	        	//putc(ch,fp);  //   valid
	        	printf("%c",ch);  //valid
		}
		printf("\n");
		
	///////////////////////////////////////////////	
		//read file 3
		//fgets(msg1,100,fp);
	//	puts(msg1);
		
		if(fgets(msg1,100,fp) != EOF)
		{
			puts(msg1);
			
		}
		
		printf("\n");
/////////////////////////////////////////////////////////
		
		//read file
		fread(msg,1,50,fp);
		puts(msg);
		
		printf("\n");
		
	//////////////////////////////////////////////	

    }
    
    //close the file
    fclose(fp);
    return 0;
}
