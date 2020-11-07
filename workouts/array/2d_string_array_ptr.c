#include<stdio.h>
int main()
{
    int row =0;
    //create 2d array of the characters
    char * arr[5] = {"S1", "S2", "S3", "S4", "S5"};
    //create pointer to the array
    char **ptr = NULL;
    //initialize the pointer with array
    ptr = arr;
    for (row = 0; row < 5; ++row)// Loop for coloumb
    {
        printf("   %s \n", ptr[row]);
    }
    return 0;
}
