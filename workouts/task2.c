#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
//ascii value for string
int main()
{
    int n;
    scanf("%d", &n); 
	fgetc(stdin);
    char x[33];
    fgets(x, 33, stdin);
    printf("%x  %x  %x",x[0],x[1],x[2]);  //ascii decimal value   if 0-48  1-49  
    return 0;
}
