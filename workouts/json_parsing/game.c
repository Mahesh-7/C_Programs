#include <stdio.h>
#include <string.h>

int main()
{
    char roman[17]="MM";   
    
    // inputs: "IV","VI","MCMXCIII","MMCDXLIV"  ,"MM"
    //outputs: 4  ,   6  ,  1993,    2444   ,,  2000
    
    //fgets(roman, 17, stdin);  //prevent overflow
	int i=0,sum=0;

			
	
while(roman[i]!='\0')
{

    switch(roman[i])
    {
   		case 'I':
   			{
			  
            if(roman[i+1]=='V')
            {
                sum+=4;
                roman[i+1]='\0';break;

            }
            if(roman[i+1]=='X')
            {
                sum+=9; 
				roman[i+1]='\0';break;

            }
            else
			{
				 sum+=1; break;
			}


        }
        case 'V':
        {
            sum+=5;
			break;
        }
        case 'X':
        {
            if(roman[i+1]=='L')
            {
                sum+=40;i=5;break;
            }
            if(roman[i+1]=='C')
            {
                sum+=90;roman[i+1]='\0';break;
            }
            else
            {
                sum+=10;break;
            }
        }
        case 'L':
        {
            sum+=50;break;
        }
        case 'C':
        {
            if(roman[i+1]=='D')
            {
                sum+=400;i=3;break;
            }
            else  if(roman[i+1]=='M')
            {
            	if(roman[i+2]=='X')
            	{
            		
					if(roman[i+3]=='C')
					{
						sum+=990;i=4;break;
					}break;
				}
				else
				{
					sum+=900;roman[i+1]='\0';break;
				}
                
            }
            else
            {
                sum+=100;break;
            }break;
        }
        case 'D':
        {
            sum+=500;break;
        }
        case 'M':
        {
            sum+=1000;break;
        }

    }i++;
}

    printf("%d ",sum);

    return 0;
}
