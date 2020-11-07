//#include <stdio.h>
//
//
////int z;  //global value .bs or .dss segment 
//int sum(int a,int b)   //local stack frame erase soon   //stack 2
//{
//    static int z;   //localized global value  .ds or .bss segment 
//   // int z;  //local value erase stack frame 
//    z=a+b;
//    return (int)&z;
//}
//
//int main()    //stack 1
//{
//    int  *x = (int *)sum(1,2);
//    printf("%d\n",*x);
//    
//    int * v;       //global for stack 3 and local for stack 1
//    int data1=100;   // global for stack 3 and local for stack 1
//    {
//    	int data1=50;
//    	int data2=20;   //local for stack 3
//    	data1=data2;  //global value store local value so it possible to access
//        int data;     ///stack 3
//        
//        int d=10;
//        data =d;
//        v=&data;
//        
//    }
//    
//    printf("%d  %d\n",*v ,data1);
//    return 0;
//}
#include<stdio.h>
int foo()
{
	int i=0;
    char  * Data = (char *) malloc(i++);
    printf("%lld\n",*Data);
    foo();
    return (int)&Data;
}
int main()
{
    int *piData = NULL;
    piData = (int*) foo();
    // Now piData is Not a dangling pointer as it points
    // to static variable.
    printf("%d",*piData);
    // foo();
    return 0;
}
