#include <stdio.h>
#include <stdlib.h>
int main()
{
    //create an array of structure;
    int aiData[] = {1,2,3,4,5};
    //Create two pointer to the integer
    int *piData1 = NULL;
    int *piData2 = NULL;
    int offset=0;
    piData1 = &aiData[1];  
    piData2 = &aiData[2];
	offset=piData2-piData1;
    printf("pointer offset  =  %d\n\n",offset);
    
    return 0;
}
