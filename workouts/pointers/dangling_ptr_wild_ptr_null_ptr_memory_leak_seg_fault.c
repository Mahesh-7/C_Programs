#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr=0; //null ptr,if 0 not initialized wild ptr
   // *ptr=10;  //without memory allocation accesss it cause segmentation fault and dangling ptr
   // printf("%d",*ptr);  //seg fault(core dumped)
    ptr=malloc(0);
    *ptr=10; 
    printf("%d",*ptr);
    free(ptr); //avoid memory leak
    
}
