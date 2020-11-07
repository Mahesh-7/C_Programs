#include <stdio.h>
#include<string.h>
struct myData
{
    union   // anonymous union
    {
        int a;
        short int b;
    };
  	int c;
}z;
int main()
{
    //Variable of structure
    struct myData sMydata;
    sMydata.a =10; //valid
    sMydata.b = 20;  //valid
    sMydata.c = 40;  //valid
    printf("%d\n",sMydata.a );
    printf("%d\n",sMydata.b );
    printf("%d\n",sMydata.c );
    printf("%d\n",sizeof(z) );
    return 0;
}
