#include<stdio.h>
#include<string.h>
char dataToBeRead[50];
char s[30];
void read()
{		
	FILE *in;
	in=fopen("G:\\welcometex.txt","r");
	    while( fgets ( dataToBeRead, 50, in ) != NULL ) 
        { 
           //fgets ( dataToBeRead, 50, in );  
            printf( "%s" , dataToBeRead ) ; 
         } 
	fclose(in);
}
void write()
{		
	FILE *out;
	out=fopen("G:\\welcometex.txt","a+");  //write and read with append write
	printf("Enter msg: ");
   scanf("%[^\n]*c",s);
   //fscanf(out,"%[^\n]s",s);
    //fgets(stdin,30,s);    
    fprintf(out,"%s",s);
  
//	    while( fgets ( dataToBeRead, 50, in ) != NULL ) 
//        { 
//           //fgets ( dataToBeRead, 50, in );  
//            printf( "%s" , dataToBeRead ) ; 
//         } 
	fclose(out);
}
int main()
{
	//fprintf(stdout,"i like games");
	write();
	read();
	return 0;
}
