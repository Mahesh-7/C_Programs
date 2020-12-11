#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top=-1;


int full()
{
	if(top==(SIZE-1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int empty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int data)
{
	if(full())
	{
		printf("stack overflow\n");
	}
	else
	{
		stack[++top]=data;
	}
}
void pop()
{
	
	if(empty())
	{
		printf("stack underflow\n");
	}
	else
	{
		
		printf("element removed:%d\n",stack[top--]);
	}
	
}
void peek()
{
	if(empty())
	{
		printf("no peek value stack underfow\n");
	}
	else
	{
		printf("peek element is:%d\n",stack[top]);
	}

}

void display()
{
	int i=0;
	printf("elements are:");
	for(i=0;i<=top;i++)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
}

int main()
{
	push(1);
	pop();
	pop();
	display();
	//pop();
	//display();
	peek();
	return 0;
}
