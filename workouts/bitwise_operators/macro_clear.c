#include <stdio.h>
//Macro to clear nth-bit
#define CLEAR_BIT(value, pos) (value &= (~(1U<< pos)))
int main()
{
    unsigned int cData=0xFF;
    unsigned int pos =1;
  //  printf("Initially cData = 0x%x\n\n",cData);
   // printf("Enter the position which you want clear = ");
  //  scanf("%u",&pos);
    //Calling macro to clear nth-bit
    printf("After clearing nth-bit cData will be = 0x%x\n",CLEAR_BIT(cData,pos));
    return 0;
}
