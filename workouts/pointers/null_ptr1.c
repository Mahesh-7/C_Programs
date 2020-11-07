#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr=0; //no longer wild pointer
    ptr = malloc(sizeof(char));
    if(ptr == NULL)
    {
    	printf("no memory");
        return -1;
    }
    printf("%p",ptr);
    /*ptr can be becomes a dangling pointer */
    free(ptr);
    //ptr is no longer dangling pointer
    ptr = NULL;
    
    return 0;
}
