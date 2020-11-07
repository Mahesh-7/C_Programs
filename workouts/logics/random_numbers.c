#include <stdio.h>

/* random number generation */
unsigned long int next = 2;

int rand(void);

void srand(unsigned int seed);


void main()
{
	long long int i;
	while(1)
	{
	
		srand(next);
		printf("%d\n",rand());
			for(i=0;i<999000000;i++)
				for(i=0;i<999000000;i++)
					for(i=0;i<999000000;i++);
	}
}


/* rand: return pseudo-random integer on 0..32767 */
int rand(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/20) % 10;
}
/* srand: set seed for rand() */
void srand(unsigned int seed)
{
	next = seed;
}
