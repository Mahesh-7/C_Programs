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
    int a[8];
     int i,j,k,t,max;
     max=a[0];
     

    // game loop
    while (1) 
    {
         int mountain_h[8];
        for (i = 0; i < 8; i++) 
        {
            // represents the height of one mountain.
           
            scanf("%d", &mountain_h[i]);
                 
            
        }
        for ( i = 0; i < 8; i++) 
        {
          a[i]=mountain_h[i];
        }
          for ( j = 0; j < 8; j++) 
        {
             for ( i = 0; i < 8; i++) 
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                max=a[0];
            }
        }
        }
            
            for(i=0;i<8;i++)
            {
    
       
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
     
                printf("%d\n",a[i]); // The index of the mountain to fire on.
      
            }
    }

    return 0;
}
