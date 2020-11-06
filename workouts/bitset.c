#include<stdio.h>
void main()
{
	unsigned char a=5,b=5,c1=5,c2=5,d=10,e=11;
	a=(a<<1)|2;
	printf("%d\n",a);
	b=(b>>1)&2;
	printf("%d\n",b);
	c1=~c1;
	c2=!c2;
	printf("%d %d\n",c1,c2);
	d=e^d;
	e=e^d;
	d=e^d;
	printf("%d %d",d,e);
	
}
