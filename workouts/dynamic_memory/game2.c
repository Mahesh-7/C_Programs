
#include <stdio.h>


///problem :  sum of even array index include 0  subtract from sum of odd index

/*  input           output

	12489  			14(even_pos_include_0_position)-10(odd_pos)= 4
	124897          14-17= -3
	1				1

*/

int main()
{
    int N=1248,count=0,i=0,odd=0,even=0;

    while(N!=0)
    {
   		++count;
   		
        if(count%2!=0)
        {
        	odd+=(N%10);
            
          //  i=1;
          
        }
        else 
        {
            even+=N%10;
            
           // i=0;
          
        }
        N=N/10;
       
        
    }
    
    if(!(count%2))
    
	  printf("%d ",even-odd);
	  
	else
	
	  printf("%d ",odd-even);

    return 0;
}
