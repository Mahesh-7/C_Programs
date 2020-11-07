#include <stdio.h>
struct myData
{
    union   // anonymous union
    {
        struct
        {
            unsigned int a:32;
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
    struct myData sMydata; //structure variable
   // sMydata.a = 5; //invalid
    sMydata.data.a =10; //valid
    sMydata.b = 20; //valid
    sMydata.c = 40; //valid
    return 0;
}
