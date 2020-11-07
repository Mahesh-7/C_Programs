#include <stdio.h>
struct myData
{
    union   // anonymous union
    {
        struct
        {
            short int a;
        } data; //data is struct variable
        struct //anonymous struct
        {
            short int b;
        };
    };
    short int c;
};
int main()
{
    struct myData sMydata; //struct variable
    //sMydata.a = 5; //invalid
    sMydata.data.a =10; //valid
    sMydata.b = 20; //valid
    sMydata.c = 40; //valid
    
    printf("\n%d\n%d\n%d\n",sMydata.data.a,sMydata.b,sMydata.c);
}
