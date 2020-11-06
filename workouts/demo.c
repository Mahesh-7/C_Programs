#include<stdio.h>

void main()
{
	unsigned int c,b,a = 16;
	for(b=0;b<8;b++)
	{
	c=a&(1<<b)	;
	
	printf("%d ",c);
}

}
/*
int main()
{
	unsigned char count=0;
	unsigned  int a=1;
	while(a)
	{
		a<<=1;
		count++;
	}
	printf("%d", count/8);
}
*/
