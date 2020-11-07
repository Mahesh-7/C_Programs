#include<stdio.h>
struct test  //anonymous
{
    int a;
    int b;
} sData[2];
int main()
{
    int start, last;
    start = &sData[1].a;
    last = &sData[0].a;
    printf("\nSize of Structure : %d Bytes",start-last);
    
    return 0;
}
