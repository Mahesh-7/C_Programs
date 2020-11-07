 #include <stdio.h>

int main(void)
 {

char acData[5] ={'A','B','C','D','E'};
 char *pcData = NULL;

pcData = acData;

 printf("%c ",++*pcData);

return 0;
}
