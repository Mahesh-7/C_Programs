#include <stdio.h>

typedef void (PTR) (void * ptr,int c,...);
PTR *call;

/* ABOVE and below func ptr delaration is same */

//typedef void (*PTR) (void * ptr,int c,...);
//PTR call;

void fun(void * ptr,int c,...)
{
    if(*((int*)ptr) == 10)
    {
        printf("hello");
    }
    if(c==1)
    {
        printf(" hi");
    }
}

int main()
{
    call=fun;
    
    int f=10;
    
    call(&f,1,2,3);

    return 0;
}

