#include <stdio.h>

int main()
{
    char  name[]="elon" ;
    char *ptr= (char*)&name;
    
    ptr[0]='a';
    
    printf("%s",ptr);

    return 0;
}

