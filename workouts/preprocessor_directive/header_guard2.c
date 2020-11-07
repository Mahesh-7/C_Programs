#include <stdio.h>

#define one 0
//#undef one

int main()
{
   int i=0;
   for(i=0;i<2;i++)
   {
        #pragma once     //instead of header guards ifndef
        #ifdef one
        //#define one
            printf("one is defined\n ");
        #endif
        
        //#ifndef one1
        //#define one1
        //#endif
        
        #ifndef one1
        #define one1
            printf("one is not defined\n ");
        #endif
        
        #ifndef one1
            printf("one is not defined\n ");
        #endif
       
   }



    return 0;
}

