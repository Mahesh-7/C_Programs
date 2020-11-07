#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    void *pvDataInfo;
    
} sContext;

int main()
{
	//Allocate the memory to pointer to context structure
	sContext  *pvHandle = malloc(sizeof(sContext));
	//Allocate the memory for Information data
	pvHandle-> pvDataInfo  = malloc(10);
	free(pvHandle); // pvDataInfo  orphan
}

