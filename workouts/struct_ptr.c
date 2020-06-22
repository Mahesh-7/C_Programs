#include <stdio.h>
#include <stdlib.h>
struct student
{
	char name;
	int std;		
};			//int a=10;
struct mark
{
	struct student *studen_details;
	int mark1;
	int mark2;
};

void main()
{
	//struct mark *p4;
	//p4->
	printf("Hello\n");
	struct mark *p,q;
	
	struct student  w;
	
	//structure typecast//
	p=(struct mark*)&w;
	((struct student*)(p))->name='s';
	printf("%c\n",((struct student*)(p))->name);
	//structure typecast//
	
	
	//type conversion//
	int x=10;
     printf("%f\n",(float)x);
	//type conversion//
	
	//w=(struct student)&q;
	//w->
	
	q.mark1 = 6;
	q.mark2 = 8;
	w.name='a';
	q.studen_details->name ;
//	q.studen_details->std = 150;
//	
	p=&q;
	
	printf("%d",p->mark1);
	//printf("%d",p->mark2);
	printf("%c",q.studen_details->name);
	
}
