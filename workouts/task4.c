#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    long long n=25000; 
    long long z=n;
    int c;
    //scanf("%lld", &n);

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    while(n>0)
    {
    	n=n/10;
    	c++;    //count digits
    	
	}
 
    printf("%d",z/c);

    return 0;
}
