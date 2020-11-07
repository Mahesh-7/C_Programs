#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int cData=0xF8;
    int pos =1;
    system("COLOR F");
   // printf("Initially cData = 0x%x\n\n",cData);
   // printf("Enter the position which you want toggle = ");
   // scanf("%u",&pos);
    //toggle the nth bit.
    cData^=1<<pos;
    //Print the data
    printf("\n\n%uth Bit Set Now cData will be = 0x%x\n",pos,cData);
    return 0;
}
