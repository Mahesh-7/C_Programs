  #include<stdio.h>

  
  int main()
  {
  	
  	  int a=1,b=2,c=3;
  	  
  	  //short and open ckt using OR operator
  
	  
	  if(a<b || c++)  
	  {
	  	printf("OR short ckt if true %d \n",c);
	  }
	  
	  else
	  {
	  	printf("OR open ckt if false %d\n",c);
	  	
	  }
	  
	//short and open ckt using AND operator
	
	  if(a<b && c++)  
	  {
	  	printf("AND open ckt if true %d \n",c);
	  }
	  
	  else
	  {
	  	printf("AND short ckt if false %d\n",c);  
	  	
	  }
  	return 0;
  }
  
  
  
  

  
