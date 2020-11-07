#include <stdio.h>
#include <string.h>

//Size of the static array
#define ARRAY_SIZE sizeof(aiData)/sizeof(aiData[0])

int main(int argc, char *argv[]) 
{

    int aiData[20] = { 1, 2, 3, [15] = 40, 5, [13] = 80, [18] = 89 }; 
	int iLoop = 0;

	printf("Stored elements of the array\n");
	for(iLoop=0;iLoop < ARRAY_SIZE ; iLoop++)
	printf("     aiData[%d] =  %d\n",iLoop, aiData[iLoop]);
	
	return 0;
}

