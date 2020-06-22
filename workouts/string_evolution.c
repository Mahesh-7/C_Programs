#include<stdio.h>
void main()
{
	char s[]="(1+2)";
	char num[10];
	char bod[10];
	char op[10];
	static int c;	
	int i,j;
	for(i=0;s[i]!='\0';i++)
	{
		//printf("%c",s[i]);
		if(s[i]>='1' && s[i] <='9' || s[i]=='(' ||s[i]==')' ||s[i]=='+' ||s[i]=='-'||s[i]=='*'||s[i]=='/')
		{
			
			if(s[i]>='1' && s[i] <='9')
			{
				//printf("%c",s[i]);
				num[i]=s[i];
				//printf("%c",num[i]);			
			}
			else if(s[i]=='(' ||s[i]==')'  )
			{
				bod[i]=s[i];
				c++;
				//	printf("%c",bod[i]);
				printf("%d",c);	
			
					
			}
			else if(s[i]=='+' ||s[i]=='-'||s[i]=='*'||s[i]=='/')
			{
				op[i]=s[i];
				//printf("%c",op[i]);
			}
		}	
		else
		{
			printf("invalid");
		}
	}
	if(c%2 !=0 )
		{
			printf("invalid");
			printf("%d",c);	
			
		}
	
}
