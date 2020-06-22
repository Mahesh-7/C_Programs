
#include <stdio.h> 

int null_ptr() 
{ 
    // Null Pointer 
    int *ptr = 0;//address is 0   //to avoid garbage address
	char *ptr2 =NULL; 
      
    printf("The value of int-ptr is %d\n", ptr); 
    printf("The value of char-ptr is %s\n", ptr2); 
    
    return 0; 
} 
