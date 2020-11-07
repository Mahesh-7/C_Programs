#include<stdio.h>
int main()
{
    int row =0;
    //create 2d array of the characters
    char arr[5][10] = {"PoojaS1", "PoojaS2", "PoojaS3", "PoojaS4", "PoojaS5"};
    //create pointer to the array
    char (*ptrArr)[10] = NULL;
    //initialize the pointer with array
    ptrArr = arr;
    for (row = 0; row < 5; ++row)// Loop for coloumn
    {
        printf("%s \n", ptrArr[row]);
    }
    return 0;
}
