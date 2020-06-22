#include <stdio.h>
 void main()
 {
 	int i,n;
 	
 	printf("1.odd\n");
 	printf("2.even\n");
 	printf("choose odd /even: ");
 	scanf(" %d",&n);
 	
 	for(i=0;i<20;i++)
 	{
 		
 		if(n==1)
 		{
 				
 		 if(i%2!=0)
 		
 		 {
 			printf("%d\n",i);
		 }
		 
	    }
	    
	    if(n==2)
	    {
	     if(i%2==0)
 		 {
 			printf("%d\n",i);
		 }	
		}    
		 
	 }
	 
 }
