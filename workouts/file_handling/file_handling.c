#include<stdio.h>


int main()
{
	unsigned char msg[]="hello ";
	unsigned char msg2[]="world\n";
	
	unsigned char rx[50];
	unsigned char rx2[100];
	
	FILE * fptr;
	
	/* file write*/
	
	fptr=fopen("demo.txt","w");
	
	
	if(fptr==0)
	{
		printf("no file created\n");
	}
	else
	{
		fputs(msg,fptr);
	}
	
	
	fclose(fptr);
	
	/* file read*/
	
	
	fptr=fopen("demo.txt","r");
	
	
	if(fptr==0)
	{
		printf("no file created\n");
	}
	else
	{
		while(fgets(rx,50,fptr) != 0)
		{
			printf("%s\n",rx);
		}
	}
	
	
	fclose(fptr);
	
	/* file over ride*/
	
	
	fptr=fopen("demo.txt","a+");
	
	
	if(fptr==0)
	{
		printf("no file created\n");
	}
	else
	{
		fputs(msg2,fptr);
	}
	
	fclose(fptr);
	
	
	/* file re-read*/
	
	
	fptr=fopen("demo.txt","r+");
	
	
	if(fptr==0)
	{
		printf("no file created\n");
	}
	else
	{
		while(fgets(rx2,50,fptr) != 0)
		{
			printf("%s\n",rx2);
		}
	}
	
	fclose(fptr);
	
	
	return 0;
	
}
