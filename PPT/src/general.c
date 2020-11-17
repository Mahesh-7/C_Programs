#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
//jumping statement /non conditional / case statement
int main()
{
	    hi:
    	printf("hi");
    int i=0;
    for(;i<10;i++)  //counter control loop
    {
    		i=i/10;  //sentinel control loop
    	
            if(i==5) 
            {
                goto hi;
            }
            
        printf("%d ",i);
    }

}

//break o/p    0,1,2,3,4
//continue o/p    0,1,2,3,4,6,7,8,9
//return o/p	0,1,2,3,4
//goto o/p	0,1,2,3,4 hi 

//break vs return

//break ->exit from loop only 
//return exit from function
*/
/*
int main()
{
    int i=5;
    if (printf("\0"))  //return value from pf is zero
        i = 3;
    else
        i = 5;
    printf("%d", i);
    return 0;
}

*/


/*    ////nested printf 

int main()
{
    	int i =1;
      printf("%d", printf("%d .%d",1,1));  //nested printf   1 .14
     return 0;
}

*/



/*   //little vs big 


int main()
{
        int a=0x04030201;
        
        printf("%d",a&0xff);
}

*/

/**************** PART-2 ***********************************************/


     //inline function access using ptr


/*
typedef void(*ptr)();

inline void fun()
{
    printf("hi");
}

int main()
{
    ptr pf;
    pf=fun;
    pf();  //printf("hi");
    return 0;
}

*/

/*  //structure mem access
struct test
{
   char a[10];
   char c;
   char b:1;
   char * ptr;
}o,*p2;

//o.c=22;
//o.ptr =o.c;

//pf("%d", *o.ptr);


//o.p=&o.b;  //invalid no addr bit-field 


//o.ptr="hi";  //valid
////o.a="hi";   //invalid
//struct test o={"hello",1,"hi"};  //valid



   
int main() 
{ 
   // o.a="name";
    strcpy(o.a,"name");
    o.b=1;
    o.ptr=&o.b;
    printf("%d\n",*o.ptr);
    printf("%s\n",o.a);
    o.ptr="hello";
    printf("%s\n",o.ptr);
    return 0;
}

*/



  //sizeof operator used for array parameter


void fun(char arr[])
{
    printf("%s %d\n",arr,sizeof(arr)); //ans= hello ,not 6
}

   
int main() 
{ 
    char msg[] ="hello"; 
    fun(msg);
    printf("sizeof:%d   strlen:%d\n",sizeof(msg),strlen(msg));  //ans=6 .5
}


/*
   
int main() 
{ 
    char  p=10;
    unsigned char *p3=&p;
    int p2=(int)p;    
    int  *ptr=&p2;
    printf("%d ",*ptr);
    printf("%d ",*p3);
    return 0;
}
*/

/*
int main() 
{ 

char  p[] ="hello";

char * ptr=strnd(p,2);

pf("%s,ptr);  //he

}

*/

/*
   
int main() 
{ 
    char a[10];
    
    printf("enter any key \n");

    gets(a);
    //scanf("%c",&a);
    
    printf("%s",a);
    
}

*/

