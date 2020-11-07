#include <stdio.h>
/* printd: print n in decimal to string*/
void printd(int n);

void main()
{
	printd(-123);
	
//	if(-2)
//	{
//		printf("hello");  //-ve value will execute
//	}

}

void printd(int n)
{
	if (n < 0) {
		putchar('-');
		n = -n;
		//printf("%d\n",n);
	}
	if (n / 10)
		printd(n / 10);   //recursion function
	putchar(n % 10 + '0');
}
