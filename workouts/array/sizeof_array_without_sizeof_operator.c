#include <stdio.h>
int main(int argc, char *argv[])
{
    int iTotalElement = 0 ;
    int  aiData[] = {10, 20,  50, 60,70,80};
    //Calculate numbers of elements using pointer arithmetic
   // iTotalElement = ((char*)(&aiData + 1) - (char*)aiData)/4;    //*(&aiData + 1)  go to next memory block of array i.e.(ahead of 8 value)
    iTotalElement = *(&aiData + 1) - aiData; 
    
    printf("Number of element = %d", iTotalElement );
    return 0;
}
