#include<stdio.h>
//#define call(x) if(x==1) printf("%d",fun()); else printf("error\n");
#define val fun()

int fun()
{
	printf("running\n");
	return 1;
}

int main()
{
	float test=103.2345;
	printf("%0.2f\n",test);
//	call(1);
//	printf("%d",call(1));
	return 0;
}
