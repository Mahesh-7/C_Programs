// 230 20 35 54 19 99     avg output:77 
//316 -48 700 545 626 153 693 349 928 622 399 969 604 -124                avg output:481
//322 548 -50 529 1009 -78 -3               median output: 322
//-120 -20 899 114 975 -42 728 572 449 600 941 738 654              median output:600

#include <stdio.h>
#include <string.h>

int ret=0;
int i=0,c=0,arr[50],sum=0;

int stoi(char str)
{
	//printf("%c ",str);
    if(str !=' ' )
    {
        ret=(ret*10)+((str)-'0');
    }
    if(str == ' ')
    {
    	c++; //total number count
    	return ret;
	}
    return 0;
}
int main()
{
    char inputs[101]="230 20 35 54 19 99";
    inputs[strlen(inputs)]=' ';


    for(;inputs[i]!='\0';i++)
    {

        arr[i]=stoi(inputs[i]);
        
        if(arr[i]!=0)
        {

        	ret=0;
        	sum+=arr[i];

		}
   
    }
    if(!(c%2))
    {
    	printf("%d",(sum/c)+1);
	}
	else
	{
		printf("%d",arr[c/2]);
	}
    
 
    return 0;
}
