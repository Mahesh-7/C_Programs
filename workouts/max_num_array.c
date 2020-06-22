#include <stdio.h>
// 
//int main()
//{
//  int array[100], maximum, size, c, location = 1;
// 
//  printf("Enter the number of elements in array\n");
//  scanf("%d", &size);
// 
//  printf("Enter %d integers\n", size);
// 
//  for (c = 0; c < size; c++)
//  
//    scanf("%d", &array[c]);
// 
//  maximum = array[0];
// 
//  for (c = 1; c < size; c++)
//  {
//    if (array[c] > maximum)
//    {
//       maximum  = array[c];
//       location = c+1;
//    }
//  }
// 
//  printf("Maximum element is %d.\n", maximum);
//  return 0;
//}

void main()
{
	int a[5]={1,7,3,4,5},i;
    int max=a[0];
//	int max;
for(i=1;i<=5;i++)
{
		
	if(max<a[i])
	{
		max=a[i];
	}
		
}
printf("%d",max);
	
}
