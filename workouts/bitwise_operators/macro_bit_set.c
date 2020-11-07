#include <stdio.h>
//Macro to set nth-bit
#define SET_BIT(value, pos) (value |= (1UL<< pos))

int main()
{
    //value
    unsigned int value =1;
    
    //bit position
    unsigned int pos = 0;
    //printf("Enter the value = ");
    //scanf("%u",&value);
    //printf("Enter the position you want to Set = ");
    //scanf("%u",&pos);
    pos=7;
    
    //Calling Macro to set nth-bit
    printf("After setting nth-bit value will be = %d\n",SET_BIT(value,pos));
    return 0;
}
