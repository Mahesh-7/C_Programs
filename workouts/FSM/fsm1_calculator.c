#include<stdio.h>
#include<stdint.h>
typedef enum{
	idle,
	add,
	sub,
	mul,
	div
}operation;
operation state=idle;

//operation choose=idle;
uint8_t choose=0;
typedef void(* handler)();

typedef struct calculator
{
	handler Handle;
}calculator;
calculator cal;


void add_operation()
{
	printf("addition over\n");
}
void sub_operation()
{
	printf("subtraction over\n");
}
void mul_operation()
{
	printf("multiplication over\n");
}
void div_operation()
{
	printf("divition over\n");
}

int main()
{
	while(1)
	{	
		
		if(state == idle)
		{
			//printf("state in idle\n");
			printf("choose operation\n1.add \n2.sub\n3.mul\n4.div\n");
			scanf("%d",(int*)&choose);  //get input from user
			switch(choose)
			{
				case idle:
					
					printf("not valid selections\n");
					state=idle;
					break;
				//1.add operation
				case add:
					printf("add operation\n");
					state=add;
					break;
				//2.sub operation
					case sub:
					printf("sub operation\n");
					state=sub;
					break;
				//3.mul
					case mul:
					printf("mul operation\n");
					state=mul;
					break;
				//4.div
					case div:
					printf("div operation\n");
					state=div;
					break;
				default:
					printf("invalid choise\n");
					state=idle;
			}
		}
		else if(state == add)
		{
			cal.Handle=add_operation;
			cal.Handle();
			//add_operation();
			break;
		}
		else if(state == sub)
		{
			cal.Handle=sub_operation;
			cal.Handle();
			//add_operation();
			break;
		}
		else if(state == mul)
		{
			cal.Handle=mul_operation;
			cal.Handle();
			//add_operation();
			break;
		}
		else if(state == div)
		{
			cal.Handle=div_operation;
			cal.Handle();
			//add_operation();
			break;
		}
	}
	
	return 0;
}



/*
		uint8_t state=0;
		while(1)
		{
			if( RB0==0 && state==0)
			{
				
				portb=0xff;
				state=1;
				
			}
			else if(RB0==0 &&state==1)
			{
				portb=0x00;
				state=0;
			}
		}
*/
