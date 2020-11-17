#include <stdio.h>
#include <stdlib.h>

/*  //double ptr
int main()
{
    int a=10;  	 //20  a addr
    int * p=&a;  //30  p addr
    int ** ptr=&p;
    
    printf("address of a : %d",&a);
    printf("\naddress of p : %d",&p);
    printf("\n%d",**ptr);   //10
    printf("\n%d",*ptr);    // addr of a
    printf("\n%d",ptr);		//addr of p
}
*/

/*
//call by value

void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	//printf("a:%d b:%d",a,b);  //o/p  2,1
}


void main()
{
	int a=1,b=2;
	swap(a,b);
	//printf("a:%d b:%d",a,b);  //o/p  2,1
	
}
*/

/*
//call by reference

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	//printf("a:%d b:%d",a,b);  //o/p  2,1
}


void main()
{
	int a=1,b=2;
	swap(&a,&b);
	printf("a:%d b:%d",a,b);  //o/p  2,1
	
}
*/
/*
#define TRISA *ptr

int main()
{

	
int * ptr =(int*)6356632;

TRISA =255;

printf("%d ",TRISA);

int * ptr2=malloc(10);  //wild ptr = garbage addr  empty ptr declare

free(ptr2);

*ptr=10;

printf("dangling ptr");

if(ptr2 == 0)
{
	printf("no mem create");
}
else
{
	printf("mem create");
}

return 0;
	
}

*/



int *fun()
{
	
	int a=10;  //to avoid dangling ptr use static variable
	
	return &a;
	
}


typedef void (*ptr) ()  ;  //func ptr declaration with typedef


void func()

{
    printf("hi");
}



int main()
{
	
/*** dangling ptr in dynamic mem  ***********/

//	int * ptr2=malloc(10);  
	
//	free(ptr2);
	
//	*ptr2=10;  
	
//	printf("no dangling ptr");

/*** ***********  ***********/

/*** dangling ptr in static mem  ***********/

//	int * p = fun();
	
//	printf("%d",*p);
	
//	return 0;
	
/*** ***********  ***********/
	 //  	int a[]={10,11};
     //   int* ptr= (int*)&a;
     //   printf("%d",ptr); // char  --> 6356628(base)   6356629(base+1)   int -->6356628	(B)		6356632(B+1)  
     
     
     /************* dynamic mem alloc		***************/
     
     /*
     
    char msg[]="hi1";
    
    char * p =malloc(2); //2bytes
    
    //p=msg;
    
    //printf("%s",p);
    
    p=realloc(p,2);  //3 byte
    
    p=msg;
    
    printf("%s",p);
    
    */
    
    
    /******************* stack vs heap overflow		***********************/
/*
	int a[5]={0}; //20 byte  
	
	a[10]=10;
	
	printf("%d",a[10]);  //ans 
	
*/

   /******************* func ptr	***********************/
   
/*

    ptr pfun;
    
    pfun=&func;  //func ptr declaration    //  void (*ptr) () =fun;
    
    //ptr=fun;  //func ptr stores addr of func
    
    pfun() ; //fun ptr call   // (*ptr) () ;
    
    
*/
   /******************* func ptr	***********************/


}





