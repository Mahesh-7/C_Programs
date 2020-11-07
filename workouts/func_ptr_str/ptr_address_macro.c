#include <stdio.h>
//#define (*ptr) 6356636  //invalid
#define GPIOA 6356636  //valid

/////////////////////////////////////////
typedef enum port
{
	A,B,C,D
}Port;

#define PORT(x)  \
	(	(x== A)? 6356636: \
		(x== B)? 6356640: \
		(x== C)? 6356644 : \
		NULL)
/////////////////////////////////////////////		
#define MACRO(num, str) { \ 
            printf("%d", num); \ 
            printf(" is");  \ 
            printf(" %s number", str); \ 
            printf("\n"); \ 
           } 
////////////////////////////////////////////


void main()
{
	
//////////////////////////////////////////////
	int a=10;
	int *ptr=(int*)GPIOA;
	*ptr = 20;
	printf("%d\n ",*ptr);


////////////////////////////////////////////////

	int*ptrz = PORT(D);
	printf("%d\n",*ptrz);
	
//////////////////////////////////////////////////
	
	  
 int num=2; 
  
    printf("\nEnter a number: "); 
   // scanf("%d", &num); 
  
    if (num & 1) 
    {
    		MACRO(num, "Odd"); 
	}
        
    else
    {
    	MACRO(num, "Even"); 
	}
///////////////////////////////////////////////////

}
