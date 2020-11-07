#include <stdio.h>
#include <stdlib.h>
int main()
{
    char* ptr = NULL;
    // malloc() allocate the memory for 10 characters
    // containing garbage values
    ptr = (char*)malloc(1 * sizeof(char)); // 10*1bytes = 10 bytes
    if(ptr == NULL)
    {
        return (0);
    }
    //printf("Enter the name = ");
    char * p=ptr;
    //ptr=(char*)&p;
    p="mahesh";
    //fgets(ptr,50,stdin);
    printf("Read data = %s\n\n",p);
    // Deallocates memory previously allocated by malloc() function
    free(ptr);
    return (0);
}
