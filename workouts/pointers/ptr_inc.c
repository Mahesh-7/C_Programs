#include <stdio.h>
int main()
{
    int arr[5] = {100,200,300,400,500};
    int *p = arr;
    ++*p;
    printf("*p = %d",  *p);
    return 0;
}
