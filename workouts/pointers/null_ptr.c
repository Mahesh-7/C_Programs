#include<stdio.h>
#include<stdlib.h>
int main()
{
    /* no more wild pointer */
    int *ptr= 0 ;
    
    //int *ptr = malloc(10)
    
    /*
    if you forget to assign valid memory or,
    due to any reason your pointer not gets a memory
    */
    if(ptr != NULL)
    {
        //Assigning value
        *ptr = 26;
        printf("%d\n",*ptr);
    }
    return 0;
}
