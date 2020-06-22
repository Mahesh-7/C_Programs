#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N;
    int R,i;
    int c=1;
    scanf("%d%d", &N, &R);  //5 enter 2 enter
    
    for(i=1;i<=N;i++)
    {
        printf("%d ",  c);
        c=c*R;
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    //printf("N numbers...\n");

    return 0;
}
