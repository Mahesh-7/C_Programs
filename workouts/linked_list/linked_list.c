#include<stdio.h>

#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};

struct node*head=0;

void push(struct node ** head_ref,int data)
{
	struct node * new_node=(struct node *)malloc(sizeof(struct node));
	
	new_node->data=data;
	new_node->next=0;
	
	struct node *last=*head_ref;
	
	if(*head_ref == 0)
	{
		*head_ref=new_node;
		return;
	}
	
	while(last->next!=0)
	{
		last=last->next;
	}	
	
	last->next=new_node;
	
}

void delete(struct node**head_ref,int key)
{
	struct node*prev=0,*temp=*head_ref;
	
	if(temp==0)
	{
		return;
	}
	
	if(temp->data==key && temp!=0)
	{
		*head_ref=temp->next;
		free(temp);
		return;
	}	
	
	while(temp->data != key && temp!=0)
	{
		prev=temp;
		temp=temp->next;
	}
	
	prev->next=temp->next;
	free(temp);
}

void display(struct node * head)
{
	while(head!=0)
	{
		printf("%d ",head->data);
		head=head->next;		
	}
	
}

int main()
{

	push(&head,1);
	
	push(&head,2);
		
	push(&head,3);
	
	display(head);	
	
	printf("\n");
	
	delete(&head,3);
	
	display(head);	
	
	return 0;
		
}
