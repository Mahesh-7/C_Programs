#include<stdio.h>
#include<string.h>

void main()
{
	FILE *pointer;
	int i = 0,j = 0;int n=3;
	char data_written[20];
	char words[] ="knowledge";
	pointer = fopen("10k.txt","r");
	
	while(fgets(data_written, sizeof(data_written), pointer) != '\0') //null 
	{
        char r[30];int len = 0;int count = 0;
        char dupl[20],dupl_len = strlen(words);
        len = strlen(data_written);
        strcpy(r,data_written);
        strcpy(dupl,words);
		//printf("%s %d",data_written,strlen(data_written)-1);		        
		if(dupl_len >= len)    //         knowledge > new
		{
			for(i=0;i<dupl_len;i++)	
			{
				for(j=0;j<len;j++)	
				{	
					if(dupl[i] == r[j])
					{
						count++;
						//dupl[i] = '\0';
						break;
					}
				}	
			}			
		}
		if(len == count)
		{
			printf("%s",r);
		}		     
    }		
	fclose(pointer);	
} 
