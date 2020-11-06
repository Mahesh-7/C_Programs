#include<stdio.h>
void main()
{
int a,n;
scanf("%d",&n);
int i;
scanf("%d",&i);
a=n&(1<<i);
printf("%d\n",a);
if(a>0)
{
printf("bit set");	
}
else printf("bit not set");	
}

