#include<stdio.h>
#include<stdlib.h>
int main()
{
    char * pBuffer = malloc(sizeof(char) * 10);
    /* Do some work */
    /*Not freeing the allocated memory*/ //it cause for memory leak
    return 0;
}
