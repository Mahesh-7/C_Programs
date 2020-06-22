#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char duration[257];
    scanf("%s", duration);
    int l=strlen(duration);
    printf("%d\n",l);
    int a[20],i,z;
    for(i=0;i<l;i++)
    {
        if(duration[i] != ':')
        {
         a[i]= duration[i]-48 ;
        // printf("%c",duration[i]);
         printf("%d",a[i]);
     
        }
    }
    z=((((a[0]*10)+a[1])*60)+((a[3]*10)+a[4]));
    printf("  %d",z);

    return 0;
}
