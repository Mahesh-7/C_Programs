#include<stdio.h>

unsigned char Swap_Bits(unsigned int Byte,unsigned char Pos_1,unsigned char Pos_2)
{
	if ( ((Byte>>Pos_1)&1) != ((Byte>>Pos_2)&1) )
	
	{
		Byte ^= (1<<Pos_1);	//bit swap
		
		Byte ^= (1<<Pos_2);
	}
	
	return Byte;
}


void main()
{
unsigned int i,a,*b;
unsigned int Byte = 27500;
for(i=0;i<32;i++)
{
	a=Byte&(1<<i);
	printf("%d ",a);
}

unsigned char Pos_1,Pos_2;

printf ("%d",Swap_Bits(Byte,5,0));

printf("\n%d\n",sizeof(b));	
}




