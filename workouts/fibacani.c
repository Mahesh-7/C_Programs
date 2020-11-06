# include<stdio.h>
void main()
{
	int a,b,c,d,i;
	a=0;b=1;
	scanf("%d",&c);
	printf("series= %d %d ",a,b);
	for(i=0;i<c-2;i++)
	{
		d=a+b;
		printf("%d ",d);
		a=b;
		b=d;
	
	}
	
}
