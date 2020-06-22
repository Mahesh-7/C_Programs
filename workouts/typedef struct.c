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
    
    type*   t1 = NULL;
    t1 = (type*) &t2;//
    t1->status = 9;
    
    ((mode*)(t1))->easy = 11;
    printf("%d\n", ((mode*)(t1))->easy);
    scanf_s("%d", &((mode*)(t1))->hard);
    printf("%d\n", ((mode*)(t1))->hard);
    t1->status = 99;
    printf("%d\n", t1->status);
    printf("%d\n",t2.easy);
      printf("%d\n", t1->status2);
}
