#include <stdio.h>

struct demo
{
	int x;	
};

void main()

{
	struct demo v[5];
	
	v[0].x=1;
	v[1].x=2;
	v[2].x=3;
	v[3].x=4;
	v[4].x=5;
	
	struct demo *p=&v;
	
	printf("%d",(p+2)->x);
}
