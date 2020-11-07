#include<stdio.h>
#include<stdlib.h>
struct func4
{
	char b;
	char *p1;
	struct func5
	{		
		struct func6
		{
			struct func7
			{
				char z;
			}*f;
		}*e;
	}*d;
}*ptr1,c;



void func(const unsigned volatile char * msg)
{
	printf("hello %s\n",msg);
}

void func2(const unsigned volatile char * msg)
{
	printf("hi %s\n",msg);
}

void func3(const unsigned volatile char * msg)
{
	printf("how are you %s\n",msg);
}

typedef void (*ptr[3])(const unsigned volatile char * msg);

void main()

{

//	ptr1=0;
	ptr1=malloc(sizeof(struct func4));
	c.b=10;
	ptr1->d=malloc(10);
	ptr1->d->e=malloc(10);
	ptr1->d->e->f=malloc(10);
	ptr1->b=22;
//	c.d.e.f.z=10;
//	ptr1=&c;
	//ptr1->
	ptr1->d->e->f->z=27;

  // int *ptr7=malloc(0);
  //  printf("%d",sizeof(malloc(0)));
	
	printf("\n%d %d  %d\n",ptr1->d->e->f->z,ptr1->b,sizeof(c));
//printf("\n%d\n",sizeof(c));
//	ptr1->p1=malloc(10);
//	free(ptr1->p1);
	
//	ptr1->        //dereference
//	(*ptr1).     //dereference
	int i=0;
	
	ptr ref={&func,&func2,&func3};
	
	for(;i<3;++i)
	{
		(*ref[i])("Elon");
	}
	
	
}
