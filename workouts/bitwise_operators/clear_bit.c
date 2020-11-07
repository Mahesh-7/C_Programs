#include <stdio.h>
//function to clear nth-bit
int clearNthBit(unsigned int data,unsigned int pos)
{
    return (data & (~(1 << pos)));
}
int main()
{
    unsigned int cData=0xFF;
    unsigned int pos =1;
   // printf("Initially cData = 0x%x\n\n",cData);
   // printf("Enter the position which you want clear = ");
   // scanf("%u",&pos);
    //clear the nth bit.
    cData = clearNthBit(cData,pos);
    //Print the data
    printf("\n\n%uth Bit clear Now cData will be = 0x%x\n",pos,cData);
    return 0;
}
