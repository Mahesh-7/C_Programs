#include<stdio.h>
#include<stdlib.h>
#define ARRAY_SIZE 5
/*
int main()
{
    int arr[ARRAY_SIZE] = {1,2,3,4,5};
    int i = 0;
    // Pointer to an array of integers
    int (*ptr)[ARRAY_SIZE];
    // Points to the whole array arr.
    ptr = &arr;
    for(i=0; i< ARRAY_SIZE ; ++i)
    {
        printf(" arr[%d] = %d\n",i,(*ptr)[i]);
    }
    return 0;
}*/

///*  string 1d array ptr


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
        printf("%s \n", arr[row]);
    }
    return 0;
}

//*/
