#include <stdio.h>
int main()
{
    int iData[5] = {10,20,30,40,50};
    int *piData = iData;
    int result = 0;
    result = --*piData++;
    printf("%d\n\n", result);
    return 0;
}
