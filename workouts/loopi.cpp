#include<stdio.h>

int main()
{
	int n1,n2;
	
	if(1)
	{
	printf("Menu\n");
	printf("1.breakfast\n");
	printf("2.lunch\n");
	printf("3.dinner\n");
	scanf("%d",&n1);
	
		if(n1==1)
		{
			printf("idly\n");	
			printf("1.order\n");	
			printf("2.cancel\n");	
			scanf("%d",&n2);
			
				if(n2==1)
				{
					
					printf("idly order confirmed");	
					
				}
				
				if(n2==2)
				{
					printf("idly order canceled");
				}
				
		}
		
		else if(n1==2)
		{
			printf("meals\n");
			printf("1.order\n");	
			printf("2.cancel\n");
			scanf("%d",&n2);	
				if(n2==1)
				{
					
					printf("meals order confirmed");	
					
				}
				
				if(n2==2)
				{
					printf("meals order canceled");
				}
					
		}
		
		else
		{
			printf("Grill\n");
			printf("1.order\n");	
			printf("2.cancel\n");
			scanf("%d",&n2);	
				if(n2==1)
				{
					
					printf("grill order confirmed");	
					
				}
				
				if(n2==2)
				{
					printf("grill order canceled");
				}	
		}
		
	}
}



































































































