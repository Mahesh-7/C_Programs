#include <stdio.h>


/*
struct a
{
    int a;
    
    struct 
    {
        int b;
    };

}o1;


int main()
{
    
    o1.b=11;
    
    printf("%d\n",o1.b);

    return 0;
}
*/

/*
#include <stdio.h>

typedef struct var
{
        int a;
        
        char *name;
    
};

typedef struct var s_var;


s_var fun(s_var * ptr)
{
    printf("hi %s",ptr->name);
}

int main()
{

    s_var o1;
    
    s_var * ptr=&o1;
    
    ptr->name="coder";
    
    fun(&o1);
    
    (*ptr).a=111;
    
    ptr->a=222;
    
   // o1.a=11;
    
   // printf("%d\n",o1.a);
   
    printf("%d\n",(*ptr).a);

    return 0;
}
*/



#include <stdio.h>

typedef union REG
{
    unsigned char TRISC;


    struct
    {
        unsigned char RC0:1;
        unsigned char RC1:1;
        unsigned char RC2:1;
        unsigned char RC3:1;
        unsigned char RC4:1;
        unsigned char RC5:1;
        unsigned char RC6:1;
        unsigned char RC7:1;	
    
    };

}REG_Def_t;

int main()
{    
    REG_Def_t GPIOC; 
    
    GPIOC.RC6=0;
    //GPIOC.TRISC=0x80;
    
    printf("%d",GPIOC.RC6);   //ans=
    
    //printf("%d",sizeof(GPIOC));   //ans=1 byte
    return 0;


}


