#include<stdio.h>

void main()
{
	char * a[3]={"hi","hello","how"};//2d string array using pointer
	
	char b[3][10]={"hi","hello","how"};  //2d string array using array matrix
	
	printf("%s \n",a[1]); //2d pointer string 
	
	printf("%s \n",b[1]);  //2d array string
}
