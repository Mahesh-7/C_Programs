#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
	
	int data;
	struct node*left;
	struct node*right;
	
}node;

node * create_node(int data)
{
	node*new_node=(node*)malloc(sizeof(node));
	new_node->data=data;
	new_node->left=0;
	new_node->right=0;
	
	return new_node;
}

node*inorder(node*root)
{
	//LDR
	if(root==0)return;
	inorder(root->left);
	printf("%d -> ",root->data);
	inorder(root->right);
	
}

node*preorder(node*root)
{
	//DLR
	if(root==0)return;
	printf("%d -> ",root->data);
	preorder(root->left);	
	preorder(root->right);
	
}

node*postorder(node*root)
{
	//LRD
	if(root==0)return;
	postorder(root->left);	
	postorder(root->right);
	printf("%d -> ",root->data);
	
}

node*insertLeft(node*root,int data)
{
	root->left=create_node(data);
	return ;	
}

node*insertRight(node*root,int data)
{
	root->right=create_node(data);
	return ;	
}

int main()
{
	node*root=create_node(1);
	insertLeft(root,2);
	insertRight(root,3);
	
	insertLeft(root->left,4);
	insertRight(root->right,5);
	
	printf("\n inorder: ");
	inorder(root);	
	printf("\n preorder: ");
	preorder(root);
	printf("\n postorder: ");
	postorder(root);	
		
	return 0;
}
