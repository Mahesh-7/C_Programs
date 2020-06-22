#include <stdio.h>
#include <stdlib.h>

//void pointer
void voidd_ptr()
{
	
int a=5;    
char b='b';
void * ptr =&a;  //to store any data type address use void ptr and to derefference use typecast to datatypes
void * ptr2=&b;  //to store any data type address use void ptr and to derefference use typecast to datatypes
printf("void pointer-int:%d\n",*(int*)ptr);
printf("void pointer-char:%c\n",*(char*)ptr2);

}

