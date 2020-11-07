#include<stdio.h>
int init()
{
    return 10;
}

int main()
{
    static int data = init();

    printf(" value of data = %d", data);

    return 0;
}
