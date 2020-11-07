#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

typedef union
{
    //struct   //empty
   //{
   	
        uint8_t LED1 : 1;
        uint8_t LED2 : 1;
        uint8_t LED3 : 1;
        uint8_t LED4 : 1;
        uint8_t LED5 : 1;
        uint8_t LED6 : 1;
        uint8_t LED7 : 1;
        uint8_t LED8 : 1;
        int c;
        char b;
   // };
    int a1;
    char d;
	int8_t AllLedState;
	
} LED_BAR_STATE,z;


void main()
{
	LED_BAR_STATE * ptr =malloc(sizeof(ptr));
	ptr->LED1=0;
	ptr->LED2=1;
	printf("%d\n",ptr->LED1);
	printf("%d\n",ptr->LED2);
	
	printf("%d\n",sizeof(z));
}
