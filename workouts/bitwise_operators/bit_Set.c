#include <stdio.h>

//function to set bit
int setBit(unsigned int data,unsigned int pos)
{
    return (data|(1 << pos));
}

int main()
{
    unsigned int cData=0x00;
    unsigned int pos =0;
    printf("cData = 0x%x\n\n",cData);
    
    //Get position from the user
    //printf("Enter the position which you want set = ");
   // scanf("%u",&pos);
    pos=1;
    //Call function to set the bit
    cData = setBit(cData,pos);
    
    //Print the data
    printf("\n\n%dth Bit Set Now cData will be = 0x%x\n",pos,cData);
    
    return 0;
}
