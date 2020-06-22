#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
int a[8],max,i,j;
  max=a[0];

     // game loop
 	 // while (1) 
    {
        for ( i = 0; i < 8; i++) 
        {
            // represents the height of one mountain.
            int mountain_h;
            scanf("%d", &a[i]);
          //  a[i]=mountain_h;          
            
        }
      
        int temp;
        for(j=0;j<8;j++)
        {
		
      	  for ( i = 0; i < 8; i++) 
       		 {
        		//	printf("%d\n",a[i]);
          		  if(a[i]<a[i+1])
         		   {
             		   temp=a[i];
             		   a[i]=a[i+1];
               			a[i+1]=temp;
               			max=a[0];
        			}
       		 }
   		 }
        

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

       // printf("4\n"); // The index of the mountain to fire on.
    }
     //for ( i = 0; i < 8; i++) 
        {
			printf("%d ",max);
		}
    return 0;
}
