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
			//	printf("%d\n",dec[i]);		

		}

			
		else if(*(hex+i) >='A' && *(hex+i) <= 'F')
		{
			dec[i] = (*(hex+i)-55);
			//	printf("%d\n",dec[i]);
		

		}
		
		i++;
			
	}
	
	/*  
	while(j<i)
	{
		switch(dec[j])
		{
			case 0:				
				printf("0000 ");break;
			case 1:				
				printf("0001 ");break;
			case 2:				
				printf("0010 ");break;
			case 3:				
				printf("0011 ");break;
			case 4:				
				printf("0100 ");break;
			case 5:				
				printf("0101 ");break;
			case 6:				
				printf("0110 ");break;
			case 7:				
				printf("0111 ");break;
			case 8:				
				printf("1000 ");break;
			case 9:				
				printf("1001 ");break;
			case 10:				
				printf("1010 ");break;
			case 11:				
				printf("1011 ");break;
			case 12:				
				printf("1100 ");break;
			case 13:				
				printf("1101 ");break;
			case 14:				
				printf("1110 ");break;
			case 15:				
				printf("1111 ");break;
			//default:				
			//	break;
									
		}
		j++;
	}
	*/
	char * bin[32];	
	while(j<i)
	{
		switch(dec[j])
		{
			case 0:				
				bin[j]="0000";
				break;
			case 1:				
				bin[j]="0001";
				break;
			case 2:				
				bin[j]="0010";
				break;
			case 3:					
				bin[j]="0011";
				break;
			case 4:	
			
				bin[j]="0100";
				break;
			case 5:				
				
				bin[j]="0101";
				break;
			case 6:				
			
				bin[j]="0110";
				break;
			case 7:				
			
				bin[j]="0111";
				break;
			case 8:				
			
				bin[j]="1000";
				break;
			case 9:				
			
				bin[j]="1001";
				break;
			case 10:						
			
				bin[j]= "1010";
				break;
			case 11:				
			
				bin[j]="1011";
				break;
			case 12:				
			
				bin[j]="1100";
				break;
			case 13:				

				bin[j]="1101";
				break;
			case 14:				
				bin[j]="1110";
				break;
			case 15:				

				bin[j]="1111";
				break;
			default:				
				break;
									
		}
		j++;
	}
	
	//printf("%c",(*(bin[0]+3)));  // 0 to get 0 charcter

	j=0;
	
	int binary[32];
	
	while(j<i)
	{
		printf("%s",bin[j++]);  //2d string pointer array
	}
	printf("\n");
	int x=0,y=0,c=0;
	
	for(x=0;x<i;x++)
	{
		for(y=0;y<4;y++)
		{
			printf("%d",*(bin[x]+y)-48);
			binary[c++]=*(bin[x]+y)-48;
		}
	}

	
	
	
	
	
	
}
	
	

