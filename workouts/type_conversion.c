#include <stdio.h>
void main()
{
	
	//************implicit conversion*******************//
	int  consti=10;
	
	float z=consti+1.0;//implicit conversion
	
	 int v=10;
	 char m='a';  //ascii
	 int g =v+m;  //implicit conv
	 printf("%d  ",g);
	 
	//************implicit conversion*******************//
	
	//const int a=10;//const value cant change read only memory
	//a=11;
	printf("%f ",z);
	
	
		//************explicit conversion*******************//
	float c=20.1;
	
	int x=(int)c+1;  //explicit conversion
	
		printf("%d ",x);
		
		
		//************explicit conversion*******************//
			float f=12.56;   ///works
			
			int * p=(int*)&f;
			
				printf("%d\n",*(int*)p); //wrong ans
			
			printf("%d",(int)f);  //works
		
		//printf("%d",f);//error
		
		
		
			//************explicit conversion*******************//
			
		
	
}
