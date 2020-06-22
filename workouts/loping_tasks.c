#include<stdio.h>
void main()
{
	int sum=0,n,n1,i,avg,fact=1,arm=0,mod,div;
	printf("enter sum numbers ->Enter and armstrong num :\n");
	scanf("%d" ,&n);          //*******n input for sum,fac********//   //******n1 input for armstrong number********//
	
	//***********sum of num,factorials***************//
	
	for(i=1;i<=n;i++)
	{
		
		sum=sum+i;//sum
		fact=fact*i;//factorial
		
	}
	
	avg=sum/n;
	printf("sum:%d\n",sum);
	printf("avg:%d\n",avg);
	printf("factorial:%d\n",fact);
	
	//***********sum of num,factorials***************//
	
	
	//*************armstrong number****************//
	n1=1000;
	for(i=0;i<=n1;i++)
	{
	
	while(n1>0)
	{
	mod=n1%10;
	arm=arm+(mod*mod*mod);	
	n1=n1/10;	
//	printf("armstrong %d",arm);
//	while(1);
	}	
	
	printf("armstrong %d",arm);
    }
	
	//*************armstrong number****************//
}
