#include<stdio.h>

int syntax_error();
void string_handler();
int evaluate(char,char,char);
int pop();
int pop1();
void push(int);
void push1(int);
int size=20;
char op[10];
char val[10];
int i,b;
int x,y;
signed int n=0;
int top=-1;
int top1=-1;
char val1,val2,oper;
char result;


char s[]="((1*2)*(4+3))"; //14 //given input
//char s[]="(()()"; //checking purpose

void main()
{
	
	if(syntax_error())
	{
		printf("valid\n");
		string_handler(); //evalute strings
			
	}
	
	
	else
	{
		printf("invalid\n");
	}
	
	printf("result is %d",val[top]);
}

int syntax_error()
{
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i] <='9' || s[i]=='(' ||s[i]==')' ||s[i]=='+' ||s[i]=='-'||s[i]=='*'||s[i]=='/' ||s[i]==' ')
		{			
			if(s[i]=='(')
			{
				n++;
			}
			else if(s[i]==')')
			{
				n--;			
			}
	    }
	    else
	    {
	    	b=1;	    	
		}
	
	}
	if(n==0 && b!=1)
	{
		return 1;
		printf("valid");
	}
	else
	{
		return 0;
		printf("invalid");
	}
}
void push(int a)
{
	if(top!=size-1)
	{
		val[++top]=a;
	}
	else
	{
		//do nothing
	}
}
void push1(int a)
{
	if(top1!=size-1)
	{
		op[++top1]=a;
	}
	else
	{
		//do nothing
	}
}
int pop()
{
	//top--;
	return val[top--];//poped value
}
int pop1()
{
	//top1--;
	return op[top1--];//popped value
}

int evaluate(char x,char y,char z)  //val1,val2,oper
{
	if(z=='+') return ((x-48)+(y-48));
	if(z=='-') return ((x-48)-(y-48));
	if(z=='*') return ((x-48)*(y-48));
	if(z=='/') return ((x-48)/(y-48));
	
}

void string_handler()
{
			for(i=0;s[i]!='\0';i++)
			{
				if(s[i]>='0' && s[i] <='9')	
				{
					x=s[i];
					push(x); //values push
				}
				else if(s[i]=='(')
				{
					y=s[i];
					push1(y); //operator push
					
				}
				else if(s[i]==')' )
				{
					while(op[top]!='(')
					{
						oper=pop1();//pop ope
						val1=pop();//pop value
						val2=pop(); //pop value
						result=evaluate(val1,val2,oper); //evaluate result
						push(result);
					}
				}
			}
			while(top1!=-1)
			{
				//	while(op[top]!='(')
			    	{
						oper=pop1();//pop ope
						val1=pop();//pop value
						val2=pop(); //pop value
						result=evaluate(val1,val2,oper); //evaluate result
						push(result);
					}
			}
}


