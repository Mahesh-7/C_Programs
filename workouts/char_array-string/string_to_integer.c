#include <stdio.h>

/* string to integer conversion */

int atoi(char a[]);

void main()
{
	printf("%d",atoi("23"));
}

int atoi(char s[])
{
	int i, n;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}
