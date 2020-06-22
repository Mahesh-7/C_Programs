#include <stdio.h>
#define GPIO  ((gpio*)6422164)   //TYPECAST STRUCT ADDRESS TO STORE STRUCTURE ADRESS TO MACRO NAME

typedef struct x
{
	int a;
	int b;
}gpio; //gpio is structure name not structure variable  if typedef not used it will be global variable

struct y
{
	int c;
	gpio *p;
	gpio h;  //structure data type/structure name is gpio and h is variable /obj             //**********gpio  h and  gpio z is not same memory location for struct x,if to make both same address use pointer to store any structure address 
 	//struct x h;    //structure name using typedef and its variable/obj to access from another structure
}io;  //io is global variable of struct y

void main()
{
	io.h.a=30;  //cannot access struct x --> a becaz h doent have struct x address
	
//	printf("%d\n",io.h.a);

	
	gpio z;   //z IS STRUCTURE VARIABLE/OBJECT
	printf("%d\n",&z);//FOUND STRUCTURE ADDRESS
	
	printf("%d \n",GPIO);//adress of strcture x
	
	GPIO->a=10; //DEREF ADDRESS TO CHANGE MEMBERS VALUES
	GPIO->b=20; 
	
	printf("before\n");
	
	printf("%d \n",GPIO->a);

	
	gpio * GPIOC=&z;
	
	GPIOC->b=20;
	
	printf(" value is :%d \n "  ,z.b );
	
	GPIOC->a=50;
	
	io.p=&z;
	
	io.p->a=70;
	
	printf("%d\n",io.p->a);
	
	printf("%d\n",z.a);
	
	printf("%d\n",GPIOC->a);
	
	printf("after\n");
	
	printf("%d \n",GPIO->a);
	

	
	struct y * b= &io;

	b->h.b=99;
	
	printf("%dkkkkk\n",b->h.b);
	
	printf("%dzzzzzz\n",z.b);
	
	
	
	
}
