#include <stdio.h>
#define GPIO  ((gpio*)6422164)   //TYPECAST STRUCT ADDRESS TO STORE STRUCTURE ADRESS TO MACRO NAME

typedef struct x
{
	int a;
	int b;
}gpio; //gpio is structure name not structure variable  if typedef not used it will be global variable

typedef struct y
{
	int c;
	gpio *p;
	gpio h;  //structure data type/structure name is gpio and h is variable /obj
 	//struct x h;    //structure name using typedef and its variable/obj to access from another structure
}io;  //io is global variable of struct y

void main()
{
	io l;
	
	io*l1=&l;
	
//both are same	l.h.a == l1->h.a   but but  gpio h and gpio z are not same memory location so diff values will be store for structure
	
	gpio z;   //z IS STRUCTURE VARIABLE/OBJECT
	

	
	printf("%d\n",&z);//FOUND STRUCTURE ADDRESS
	
	printf("%d \n",GPIO);//adress of strcture x
	
}
