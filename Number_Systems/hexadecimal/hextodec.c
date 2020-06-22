#include<stdio.h>

#include<string.h>

void main()
{
	char  hex[32] = "abcd";
	
	//printf("%s",strupr(hex));
	
	strupr(hex);
	
	int hexlen=strlen(hex);
	
//	printf("%d",hexlen);
	
	int i=0,j=0;
	
	int dec[hexlen];
	
	int power=1;
	
	//printf("%c",*(hex+1));

	//for(i=0;i<hexlen-1;i++)
	
//while(i<hexlen-1)

    int deci=0;



while(*(hex+i) != '\0')
	{
		//	printf("%c", *(hex+i)); i++;
		
		if(*(hex+i) >= '0' && *(hex+i) <= '9') 
		{
					
			dec[i] = (*(hex+i)-'0');
				//printf("%d\n",dec[i]);
		

		}

			
		else if(*(hex+i) >='A' && *(hex+i) <= 'F')
		{
			dec[i] = (*(hex+i)-55);
			//	printf("%d\n",dec[i]);
		

		}
		i++;
		
		
	}
	
	//printf("ans=%d",dec);
	
	
	for(j=i-1;j>=0;j--)
	{
	//	printf("%d\n",dec[j]);
		 deci  +=  (dec[j] * power);
		 power *= 16;
		// printf("%d\n",deci);
	}
	
	printf("%d",deci);
	
	
	
	
}
