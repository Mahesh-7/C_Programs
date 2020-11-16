#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100];
	char str2[100]="system";
	char str3[100];
	
	FILE * fptr;
	fflush(stdin);
	
	fptr=fopen("file.txt","r");

/*		
	// read file
	
	    while( fgets ( str1, 50, fptr ) != NULL ) 
        { 
          
            // Print the dataToBeRead  
            printf( "%s" , str1 ) ; 
         } 
    //	fclose(fptr);
    	
    	
	//fscanf(fptr, "%s ", str1);

	// write a file 
	
		fptr=fopen("file.txt","w");
		
		if ( strlen (  str2  ) > 0 ) 
        { 
              
            fputs(str2, fptr) ;    
            fputs("\n", fptr) ; 
        } 
       // fclose(fptr);
       
        // read file
		fptr=fopen("file.txt","r");
	    while( fgets ( str3, 50, fptr ) != NULL ) 
        { 
          
            // Print the dataToBeRead  
            printf( "%s" , str3 ) ; 
         } 
	*/
	
	
	
	// fwrite fread
	fread(str3,100,1,fptr);
	printf( "%s" , str3 ) ;
	fclose(fptr);
	fptr=fopen("file.txt","w");
	fwrite(str2,100,1,fptr);
	fclose(fptr);
	fptr=fopen("file.txt","r");
	fread(str1,100,1,fptr);
	printf( "%s" , str1 ) ;
	
	
	
	/*	
	// fprintf fscanf
	
	fscanf(fptr,"%s",str1);	
	printf("%s",str1);
	
	fptr=fopen("file.txt","w");
	fprintf(fptr,"%s",str2);
	
	fptr=fopen("file.txt","r");
	fscanf(fptr,"%s",str1);
	printf("%s",str1);
	*/
		
	fclose(fptr);

	return 0;
}
