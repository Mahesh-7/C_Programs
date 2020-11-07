#include <stdio.h>
//Size of the created array
#define ARRAY_SIZE  5
//Function to read array element
void ReadArray(int *paData)
{
    int index = 0;
    for(; index < ARRAY_SIZE; ++index)
    {
        printf("%d\n",paData[index]);
    }
}
int main(int argc, char *argv[])
{
    //Create an array
    int aiData[ARRAY_SIZE] = {1,2,3,4,5};
    //Pass array as a parameter
    ReadArray(aiData);
    return 0;
}
