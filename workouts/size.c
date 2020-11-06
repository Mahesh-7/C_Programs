#include<stdio.h>
void main()
{
	unsigned char count=1,i = 3;
	char z=128;//+ve or -ve
	//unsigned int i;
	//scanf("%d",&i);
	printf("%d\n",count<<i);//8
	printf("%d",z);//if 8 bit set +ve else -127
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
