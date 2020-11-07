#include <stdio.h>

/* upper  to lower level conversion */

int lower(char a);

void main()
{
	printf("%c",lower('G'));
}

int lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}
