#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct node{
	
	int data;
	struct node*left,*right;
	
}node;

node*new_node(int data)
{
	node*temp=(node*)malloc(sizeof(node));
	temp->data=data;
	temp->right=temp->left=0;
	return temp;
	
}

node*insert(node*root,int data)
{
	if(root==0)
	{
		return new_node(data);
	}
	if(data>root->data)
	{
		root->right =insert(root->right,data);
	}
	else
	{
		root->left=insert(root->left,data);
	}
	
	return root;
}

void inorder(node*root)
{
	if(root==0)
	{
		return;
	}
	else
	{
		//LDR
		inorder(root->left);
		printf("%d -> ",root->data);
		inorder(root->right);
	}
	
}

node*minNode(node*root)
{
	node*current=root;
	
	while(current && current->left!=0)
	{
		current=current->left;
	}
	return current;
}

node*deleteNode(node*root,int data)
{
	if(root==NULL) return root;
	
	if(data>root->data)
	{
		root->right =deleteNode(root->right,data);
	}
	else if(data<root->data)
	{
		root->left=deleteNode(root->left,data);
	}
	else
	{
		if(root->left==0)
		{
			node*temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==0)
		{
			node*temp=root->left;
			free(root);
			return temp;
		}
		else
		{		
			node*temp=minNode(root->right);
			
			root->data=temp->data;
			
			root->right=deleteNode(root->right,data);
		}
	}
	
	return root;
	
}


int main()
{
	node*root=0;
	
	root=insert(root,8);
	root=insert(root,3);
	root=insert(root,1);
	root=insert(root,6);
	root=insert(root,7);
	
	inorder(root);
	printf("\n");
	root=deleteNode(root,1);
	inorder(root);
	
	return 0;
	
}
