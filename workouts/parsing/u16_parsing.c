#include <stdio.h> 
#include <string.h> 

unsigned char Data[12];

void Split(unsigned char *p)
{
	int i, index ,len1=0,len2=0;
	
	unsigned char *s1=strchr(p,'{');
	
	unsigned char *s2=strchr(s1,'}');
	
	len1 = s1-p;
	len2 =  s2-s1;

	for(i=len1,index=0; i <=len2+3; i++, index++)
    {
       if(p[i] == '\\')
       {
           if((p[i+1] == 'u') && (p[i+2] == '0') && (p[i+3] == '0'))
           {
    	        Data[index] = (unsigned char)((((p[i + 4] - 0x30) & 0x0F) << 4) | ((p[i + 5] - 0x30) & 0x0F) );
    	        
				if(p[i+6]!='}'){	i += 5;	}
            }
            else
            {
                Data[index] = (unsigned char)p[i];
        	}
        }
        else
        {
            Data[index] = (unsigned char)p[i];
        }
    }

}

int main() 
{ 
    unsigned char name[]="aagnglrg{1\\u0006?X\\u0013?\\u0019}dadadkasa";
	unsigned char a,b, *p,*q,i; 
	Split(name);
	for(i=0;i<11;i++)
	{
		printf("%x\n",Data[i]);
	}

	//printf ("%x\n",'*');
} 

