#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    char *pcBuffer = NULL;
    /* Initial memory allocation */
    pcBuffer = malloc(8);
    //make sure piBuffer is valid or not
    if (pcBuffer == NULL)
    {
        // allocation failed, exit from the program
        fprintf(stderr, "Out of memory!\n");
        exit(1);
    }
    strcpy(pcBuffer, "aticle");
    printf("pcBuffer = %s\n", pcBuffer);
    pcBuffer=realloc(pcBuffer,10);
    strcat(pcBuffer,"world");
     printf("pcBuffer = %s\n", pcBuffer);
    
    
//    /* Reallocating memory */
//    pcBuffer = realloc(pcBuffer, 15);
//    if (pcBuffer == NULL)
//    {
//        // allocation failed, exit from the program
//        fprintf(stderr, "Out of memory!\n");
//        exit(1);
//    }
//    strcat(pcBuffer, "world");
//    printf("pcBuffer = %s\n", pcBuffer);
//    //free the allocated memory
    free(pcBuffer);
    return 0;
}
