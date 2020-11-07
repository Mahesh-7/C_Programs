#include <stdio.h>
#include <string.h>


/* reverse: reverse string s in place */


void reverse(char s[])
{
	
int  i, j;
char c;
for (i = 0, j = strlen(s)-1; i<j /* i<j this logic condition also can use */ ; i++, j--) {
	c = s[i];
	s[i] = s[j];
	s[j] = c;
	printf("%d",j);

}

// s[i]='\0'; if not add this string %s complete reverse string by analys its location decrement

printf("\n%c",s[0]);
printf("\n%s",s);

}

void main()

{

 char s[]="month";
 reverse(&s);
 
}
