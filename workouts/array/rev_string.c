#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
  char acData[100]={0}, Temp = 0;
   int iLoop =0, iLen = 0;
   int cnt =0;
 
   printf("\nEnter the string :");
   gets(acData);
 
   // calculate length of string
   while(acData[iLen++] != '\0');
  
  //Remove the null character
	iLen--;
    
  //Array index start from 0 to (length -1)
  	iLen--;
 
   while (iLoop < iLen) {
   	
   	/*  //using XOR operator
	   acData[iLoop]= acData[iLoop] ^ acData[iLen];
   	 acData[iLen]= acData[iLoop] ^ acData[iLen];
   	 acData[iLoop]= acData[iLoop] ^ acData[iLen]; 
	*/
	
	/*
	 //using extra buffer
	   while (iLen >= 0) {
   	
   	 acReverse[iLoop++]= acData[--iLen];
   	 
   	 */
   	
      Temp = acData[iLoop];
      acData[iLoop] = acData[iLen];
      acData[iLen] = Temp;
      iLoop++;
      iLen--;
   }
   
   printf("\n\nReverse string is : %s\n\n",acData);
	return 0;
}
