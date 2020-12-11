#include<stdio.h>
#define SIZE 3

int queue[SIZE]={0};
int head=-1,tail=-1,size=SIZE;


int full()
{
	if(tail==(size-1))
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
	if(head==tail)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enqueue(int data)
{
	if(full())
	{
		printf("queue overflow\n");
	}
	else
	{
		
		queue[++tail]=data;
		
		if(head==-1)
		{
			head=0;
		}

	}
}
void dequeue()
{
	
	if(empty())
	{
		printf("queue underflow\n");
	}
	else
	{
		printf("element removed:%d\n",queue[++head]);
		
		size++;
	}
	
}
void peek()
{
	printf("peek element is:%d\n",queue[tail]);
}

void display()
{
	int i=0;
	printf("elements are:");
	
	for(i=head;i<=tail;i++)
	{
		printf("%d ",queue[i]);
	}
	
	printf("\n");
}

int main()
{
	enqueue(1);
//	enqueue(2);
	enqueue(3);
	display();
	dequeue();
	enqueue(5);
	display();

	enqueue(7);
	display();
	peek();
	return 0;
}



