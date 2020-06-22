#include <stdio.h>

#include <string.h>

void main()
{
	
	/*  //WRITE
	
	FILE * ptr ;
		
	ptr=fopen("E:/demos.txt","w");
	
	fprintf(ptr,"%s","hello");
	
	printf("writed");
	*/
	
	/*// read
	
	FILE * ptr ;
	
	char str[100];
	
	ptr=fopen("E:/demos.txt","r");
	
	fscanf(ptr,"%s",str);
	
	printf("%s %s\n",str);	
	
	printf("read\n");
	*/
	
	
	/*  //write file
	
	
	FILE * ptr ;
	
	char a[]="hello world";
	
	ptr=fopen("E:/demos.txt","w");
	
//	fprintf(ptr,"%s ","hello");	  //simple write
	
	
	if(ptr==NULL)
	{
		printf("empty");
	}
	
	else
	{
		fputs(a,ptr);
	
		printf("writed");
	}*/
	
	
	
		 //read file
	
	
	FILE * ptr ;
	
	char a[200];
	
	ptr=fopen("E:/demos.txt","r");
	
	//fscanf(ptr,"%s",a);   //simple read
	
	//printf("%s %s\n",a);		//simple read
	
	
	if(ptr==NULL)
	{
		printf("empty");
	}
	
	else
	{
		while(fgets(a,200,ptr)!=NULL)
		{
			printf("%s",a);
		}
	
		printf("\nreaded");
	}
	
	
	fclose(ptr);

}
