
#include <stdio.h>
// union test 
// {
//     char name[17];  //pad by long data types size 
//   // int a;
//     short b;
// }z;

struct empty  //or empty struct accept by gcc compilers  ,and without tag name it is anonymous
{
};

struct test 
{
   
    struct test1  //anonymous 
    {
      
        struct test2
        {
            int c;
        }z2;
    }z1;
}z;

int main()
{
    //printf("%d",sizeof(z));
    
   z.z1.z2.c=77;
    
    printf("%d",z.z1.z2.c);

    return 0;
}
