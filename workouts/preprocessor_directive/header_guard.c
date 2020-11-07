#include <stdio.h>


//#define one1 0
//#define one 0

int main()
{
   
#if one
    printf("name defined\n");
#endif
 
#ifndef one
#define one
//#define one1 0
    printf("one is defined\n");
#endif

#ifndef one1
#ifdef one
#define one
	printf("hello\n");
#endif
    printf("one is not defined\n");
#endif


    return 0;
}

