#include <stdio.h>

int get_month(int n)
{
	
	static char * month_name[]={
	
	"invalid data","JAN","FEB",
	"MAR","APR","MAY","JUN","JUL",
	"AUG","SEP","OCT","NOV","DEC"
	
	};
	
	return (n<1 || n>12 )? month_name[0]:month_name[n];
}

void main()
{
	printf("%s ",get_month(12));	
}
