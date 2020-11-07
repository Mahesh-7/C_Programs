#include <stdio.h>
int main (void)
{
    int i =0;
    int j =0;
    int a[2][3] = {0};
    int (*p)[2] = (int (*)[2])a;
    (*p)[0] = 4;	//printf("\n%d \n",(*p)[0]);
    p++;
    (*p)[0] = 6;	//printf("\n%d \n",(*p)[0]);
    ++p;
    (*p)[1] = 27;	//printf("\n%d \n",(*p)[1]);
    for(i =0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
