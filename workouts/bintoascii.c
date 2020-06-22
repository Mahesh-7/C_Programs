#include<stdio.h>
//binary to decimal
void main()
{
 	long long int a=1000001,c=0,i,n;
	
	long long int bin[8];
	
	while(a>0)
	{
	
		n=a%10;
		bin[c]=n;
		c++;
		a=a/10;
		//printf("hi ");
	}

	static int base=1,dec = 0;
	
	for(i=0;i<c;i++)
	{
		dec+=base*bin[i];
		base=base*2;
		//	printf("%d ",dec);
	}

			printf("%d",dec); //decimal value
			
			if()
	
	
	
	
	
}
