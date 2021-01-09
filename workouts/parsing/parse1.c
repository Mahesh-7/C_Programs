#include<stdio.h>

unsigned char Data[20];


void Split(unsigned char * p)
{
	int i,j,l1,l2;
	unsigned char *s1,*s2;
	
	s1=strchr(p,'{');
	s2=strchr(s1,'}');
	
	l1=(s1-p);
	l2=(s2-s1);
	
	for(i=l1,j=0;i<=l2+3;i++,j++)
	{
		//printf("%c",p[i]);
		if(p[i]=='\\')
		{
			if(p[i+1]=='u' && p[i+2]=='0' && p[i+3]=='0' )
			{
				
				Data[j]=  ((unsigned char)((((p[i+4]-0x30)&0x0f)<<4) | ( p[i+5]-0x30)&0x0f) );	
				i+=5;
			}
		}		
		else
		{
			Data[j]=p[i];
		}		
	}

}

int main() 
{ 
    unsigned char name[]="aagnglrg{1\\u0006?X\\u0013?\\u0019}dadadkasa";
	unsigned char i; 
	
	Split(name);
		
	for(i=0;i<11;i++)
	{
		printf("%x ",Data[i]);
	}


} 
