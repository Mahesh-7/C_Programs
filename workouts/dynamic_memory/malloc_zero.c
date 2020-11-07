#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int *piBuffer = NULL;
    //allocating memory using
    //the malloc with size 0.
    piBuffer = malloc(0);
    //make sure piBuffer is valid or not
    if (piBuffer == NULL)
    {
        // allocation failed, exit from the program
        printf("Out of memory!\n");
      
    }
    *piBuffer = 10;
    printf("%d\n",*piBuffer);
    free(piBuffer);
    return 0;
}
