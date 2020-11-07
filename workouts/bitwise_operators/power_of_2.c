#include<stdio.h>
#include<stdint.h>
#define BIT(x) (32*x)-1   //8bit 

void main()
{
	int a=32,i=2;
	static const volatile  uint32_t *  DEVICE_STATUS=0;
	DEVICE_STATUS=&a;
	*DEVICE_STATUS=22;
	printf("%d",*DEVICE_STATUS);
	for(;i<=BIT(8);i*=2)
	{
		//printf("%d ",i);
		if((a&i)==a)
		{
			printf("power of 2");
			break;
		}
	}
}
