
#include <stdio.h> 

int wild_ptr() 
{ 
    // wild Pointer 
    int *ptr=1234;  //to avoid wild ptr use initialization before
      
    printf("The value of wild ptr is: %d\n", ptr); 
       
    return 0; 
} 
