#include <stdio.h>

#define set_bit_range(data,l,h) (data=(((1<<(h+1))-1)&(~((1<<l)-1))))

int main()
{
    unsigned char data=5;  //0000-01010
    
    set_bit_range(data,2,6);
    
    printf("%d",data);
    
    return 0;
    
}

//bit range set
