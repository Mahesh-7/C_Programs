#include<stdio.h>
int main()
{
	/*all variable outside scope consider as global even any storage class*/
	auto int y1=1;
	{
		y1=10;
	}		
	int y2=y1;	
	printf("%d\n",y2);	
	/*all variable outside scope consider as global even any storage class*/
	

	
	
    int row =0;
    //create 2d array of the characters
    char arr[5][10] = {"PoojaS1", "PoojaS2", "PoojaS3", "PoojaS4", "PoojaS5"};
    //create pointer to the 2d array
    char (*ptrArr)[5][10] = NULL;
    //initialize the pointer
    ptrArr = &arr;
    for (row = 0; row < 5; ++row)// Loop for coloumb
    {
        printf("%s \n", (*ptrArr)[row]);
    }
    return 0;
}
