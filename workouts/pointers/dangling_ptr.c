#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *pcData = NULL;
    //creating integer of size 10.
    pcData = malloc(sizeof(char)* 10);
    if(pcData == NULL)
    {
        return -1;
    }
    /* piData can be becomes a dangling pointer */
    free(pcData);
    //piData is no longer dangling pointer
    pcData = NULL;
    //*pcData=10;  //undefined behaviour
   // printf("%d",*pcData); //undefined behaviour
    return 0;
}
