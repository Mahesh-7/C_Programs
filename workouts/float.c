#include<stdio.h>
void char1(char a)
{
	printf("%c",a);
}
void string(char a[])
{	
	int i = 0;
	while(a[i])
	{
		char1(a[i]);
		i++;
	}	
	
//int i;
//for(i=0;a[i]!='\0';i++)
//{
//	char(a[i]);
//}
}


void main()
{
	char h[]="hello";
	string(h);
//	float x=3.123456789123456789;
//	double y=3.123456789123456789;
//	printf("%.18f",y);


}
