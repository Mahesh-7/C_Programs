#include <stdio.h>
#include <stdint.h>
#include <string.h>
int main()
{
	uint64_t i=0x1122334455667788;
	printf("%x ",i);

    FILE *fp = NULL;
    char msg[] = "hello world";
    //fgets(msg,30,stdin);
    //create a text file
    fp  = fopen ("G:/MAHESH/AZE/AZE_class/c_pro_tasks/c_class_progams/file_handling/file_handler.txt", "w");
    if(fp == NULL)
    {
        printf("File is not created\n");
        //exit(1);
    }
    else
    {
        printf("File is created\n");
        //gets(msg);
        fprintf(fp,"%d.welcome[%s]",1,msg);
        fputc('A',fp);
        fputs("\nHow are You?",fp);        
        fwrite(msg,sizeof(msg[0]),(int)strlen(msg),fp);
    }
    
    //close the file
    fclose(fp);
    return 0;
}
