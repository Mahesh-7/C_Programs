#include<stdio.h>
#include<stdint.h>
volatile typedef struct test1

{
	unsigned char a:4;
	unsigned char b:4;

	
}test1;

typedef union test2
{

	unsigned char c:4;
	unsigned char d:4;	

}test2;

void main()
{
	test1 a;    //struct 1
	test2 b;	//struct 2
	test1 *c;	//struct 1 ptr
	test2 *d;	//struct 2 ptr
	c=(test1*)&b;
	
	((test2*)(c))->c=11;  //STRUCT TYPECAST
	
	printf("%d \n",((test2*)(c))->c);

//	printf("%d",t.d);
	
/////////////   little endian /////////////	

	int hex=0x443322;
	uint8_t * ptr =(uint8_t *)&hex;
	printf("%x\n",*ptr);
	
///////////////// ARRAY VS POINTER ////////////////////


	char  text[]="hello" ;
	char * Stext = "helloptr" ;
	//Stext[1]='a';
	text[1]='b';
	//printf("%s\n",Stext);
	printf("%s  SIZE=%d\n",text,sizeof(int));	


///////////////////////	explicit type conversion	////////////////////////
char p3=33;
int * p2 = (int *)&p3;
*p2 = 44;
printf("\n%d\n",*p2);
///////////////////////////////

	
	
}
