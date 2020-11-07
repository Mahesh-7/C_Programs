/*
void main()
{
int c;
c = getchar();
while (c != '0' ) {
putchar(c);
c = getchar();
}
}*/


/*
void main()
{
long nc;
nc = 0;
while (getchar() != '\n')
{
++nc;
printf("%ld\n", nc);

}

}
*/

/* count lines in input */

/*
void main()
{
int c, nl;
nl = 0;
while ((c = getchar()) != '0')
{

if (c == '\n')
{

++nl;
printf("%d\n", nl);
}
}
}
*/


#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define EOL '0'
/* count lines, words, and characters in input */
main()
{
int c, nl, nw, nc, state;
state = OUT;
nl = nw = nc = 0;
while ((c = getchar()) != EOL)
{
	++nc;
	if (c == '\n')
		++nl;
	if (c == ' ' || c == '\n' || c == '\t')
		state = OUT;
	else if (state == OUT) {
		state = IN;
		++nw;
	}
}
	printf("%d %d %d\n", nl, nw, nc);
}
