#include <stdio.h>

typedef unsigned int uint32_t;

typedef struct
{
    uint32_t easy;
    uint32_t hard;
}mode;

typedef struct
{
    uint32_t status;
    uint32_t status2;
}type;

void main()
{
    mode t2 = { 0 };
    
    type * t1 = NULL;
    
    t1 = (type*) &t2;  //in structure type datatype/name (structure type t1 ptr done this work), address of struct mode stored
    
   
    ((mode*)(t1))->easy = 11;
    
    t1->status = 9;
    
    printf("%d\n", ((mode*)(t1))->easy);
   // scanf_s("%d", &((mode*)(t1))->hard);
    printf("%d\n", ((mode*)(t1))->hard);
    t1->status2 = 99;
    printf("%d\n", t1->status);
    printf("%d\n",t2.hard);
    printf("%d\n", t1->status2);
    
}



//structure ?
//structure vs array
//structure declaration and initialization
//local structure vs global structure
//scope of structure
//structure array
//structure function
//structure pointer
//multiple structure 
//typedef in structure
//enumeration in structure
//structure pointer typecast
//structure storage class
//limitation of structure


