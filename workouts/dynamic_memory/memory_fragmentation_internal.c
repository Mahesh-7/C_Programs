#include<stdio.h>

#include<stdlib.h>

	
char *acBuffer[100];

int main()
{
  int iLoop = 0;
  
  while(iLoop < 100)
  {
	  acBuffer[iLoop ] =  malloc(2);  //memory fragmentation occur due to payload(infrastructure/bookkeeping)
	  
	  free(acBuffer[iLoop ]);
	  
	  ++iLoop;
	  
	  
	  
  }
  
}

