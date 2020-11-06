#include<stdio.h>
void main()
{
	int a=5,b=5,c1=5,c2=5,d=10,e=11,n=9,power;
//bit left shift with bit set
	a=(a<<1)|2;
	printf("%d\n",a);
//bit right shift with bit clear	
	b=(b>>1)&2;
	printf("%d\n",b);
//bit toggle
	c1=~c1;
	c2=!c2;
	printf("%d %d\n",c1,c2);
//bit swap of 2 numbers
	d=e^d;
	e=e^d;
	d=e^d;
	printf("%d %d\n",d,e);

}
