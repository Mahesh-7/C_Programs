#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define ROWS               25
#define COLUMNS            25
#define MAX_WORD_LENGTH    25

#if ((ROWS > MAX_WORD_LENGTH) || (COLUMNS > MAX_WORD_LENGTH))
#error "Max word length is the maximum of Rows & Columns"
#endif

typedef unsigned char bool;
#define false    0
#define true     1

 unsigned char Puzzle[ROWS][COLUMNS] = {
{'E','X','B','E','U','E','J','A','C','C','R','S','S','S','C','B','E','C','Y','G','R','Q','R','S','A'},
{'X','I','N','O','I','T','A','V','O','N','N','I','H','T','R','C','M','O','U','T','N','R','R','D','D'},
{'A','F','W','H','W','A','E','M','S','P','A','G','R','L','S','O','H','I','E','M','I','G','Z','C','H'},
{'R','P','P','W','X','B','P','L','S','A','I','I','J','U','I','O','D','M','M','G','D','L','Y','Q','Y'},
{'R','U','Z','S','K','E','S','T','E','X','S','H','G','S','D','H','C','B','B','X','W','I','A','P','P'},
{'H','Q','D','Y','T','T','R','A','T','C','Z','C','S','E','V','Y','S','A','E','L','O','X','Q','U','H'},
{'K','N','S','E','W','A','N','Y','L','S','T','B','F','R','H','N','W','T','D','N','J','I','D','D','Q'},
{'J','S','N','C','T','Z','N','W','U','N','I','R','P','P','E','F','Y','O','D','E','S','K','N','W','M'},
{'Q','C','O','E','H','L','J','K','F','I','A','W','O','U','W','D','N','R','E','V','X','Z','I','Y','Z'},
{'E','G','G','L','D','E','V','E','L','O','P','M','E','N','T','O','A','E','D','I','H','Y','O','Z','X'},
{'B','Y','Q','P','U','W','W','F','I','R','W','C','A','R','I','Y','V','E','V','R','L','U','R','W','M'},
{'H','K','C','Y','E','T','Z','N','K','H','K','G','U','T','G','C','X','K','L','D','Q','L','N','D','H'},
{'I','P','X','Y','C','S','I','P','R','P','H','V','C','O','O','Q','S','G','W','F','S','N','W','K','H'},
{'M','B','X','Y','N','M','K','O','V','G','O','A','L','L','B','P','I','Y','P','L','I','Q','S','F','X'},
{'V','P','V','S','E','R','N','V','N','Q','F','O','F','C','S','J','H','H','W','E','O','S','K','Z','N'},
{'K','B','C','Y','G','Y','A','N','C','S','N','M','P','O','C','O','R','S','S','S','K','J','B','D','V'},
{'N','S','C','K','I','N','P','B','I','H','C','E','T','E','Z','A','S','Y','Y','P','S','K','P','R','J'},
{'I','V','F','K','L','S','L','T','C','Z','R','M','V','U','M','E','V','U','G','I','O','V','N','Q','W'},
{'O','O','S','I','L','E','A','E','T','F','Y','G','B','U','C','S','R','X','E','B','K','L','S','J','S'},
{'V','P','T','V','E','S','T','J','A','W','S','X','K','C','E','T','I','Y','I','X','A','O','O','I','X'},
{'Q','L','N','T','T','W','U','W','X','G','E','D','U','C','S','Z','S','R','G','S','P','Y','D','O','Y'},
{'S','T','Z','S','N','J','D','G','O','A','L','S','Z','R','Y','I','C','P','K','H','E','S','M','C','W'},
{'J','J','C','Y','I','C','U','S','T','O','M','E','R','S','A','A','Q','I','L','L','R','R','E','H','D'},
{'E','E','A','B','N','W','Q','F','H','H','L','X','H','N','L','C','K','L','I','S','P','P','R','I','G'},
{'P','E','T','O','H','K','H','K','R','S','B','G','V','H','N','P','A','P','H','F','F','B','J','G','T'}
};

unsigned int ResultRowIndices[MAX_WORD_LENGTH];
unsigned int ResultColumnIndices[MAX_WORD_LENGTH];
unsigned int ActualWordLength = 0;
char WordToFind[MAX_WORD_LENGTH];

void printPuzzle()
{
	int i,j;
	
	printf(" Azetech Solutions\n\n");
	printf("---------------------------------------------------\n");
	
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLUMNS; j++)
		{
			printf(" %c", Puzzle[i][j]);
		}
		printf("\n");
	}
	
	printf("---------------------------------------------------\n\n");
}


bool isResultChar(int row, int column)
{
	int i;
	bool retval = false;
	
	for(i = 0; i < ActualWordLength; i++)
	{
		if((ResultRowIndices[i] == row) && (ResultColumnIndices[i] == column))
		{
			retval = true;
			break;
		}
	}
	
	return retval;
}

void printResult()
{
	int i,j;

	
	//system("cls");
	
	printf(" Azetech Solutions - Result\n\n");
	printf("----------------------------------------------------------------------------\n");
	
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLUMNS; j++)
		{
			if(isResultChar(i, j))
			{			
				printf("-%c-", Puzzle[i][j]);
			}
			else
			{
				printf(" %c ", Puzzle[i][j]);
			}
		}
		printf("\n\n");
		
	}


	
	printf("----------------------------------------------------------------------------\n");
}

bool FindWord();

int main()
{
	
	
	printPuzzle();
	
	printf("\nEnter the word to find : ");
	scanf("%s", WordToFind);
	
	ActualWordLength = strlen(WordToFind); /* Find the Length */
	strupr(WordToFind); /* Make it upper */
	
	if(FindWord())
	{
		/* If Found display the result */
		printResult();
	}
	else
	{
		/* Else show error */
		printf("\nSorry! We couldn't find the word `%s`", WordToFind);
	}
}

bool FindWord()
{
	bool IsWordFound = false;
	int i,j,k,z;
	
	
	/* Logic to find word goes here */
	
	/* LOGIC TO TEST THE RESULT & FOR DEMO. SHOULD BE REMOVED */
	{
		/* Logic should update the following values */
		/* In the given example, the word SELF will be highlighted */
		/* Since the word SELF is 4 characters long, only the 4 array elements were updated */

	
	
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLUMNS; j++)				
		{	
			for(k = 0; k < ActualWordLength; k++)				
			{
				//left to right words
				if( WordToFind[0]==Puzzle[i][j] && WordToFind[1]==Puzzle[i][j+1] && WordToFind[ActualWordLength-1]==Puzzle[i][j+ActualWordLength-1])
				{
	
				ResultRowIndices[k]=i;
				ResultColumnIndices[k]=j+k;
				
			
				}
				//right to left words	
				
	
				if( WordToFind[0]==Puzzle[i][j] && WordToFind[1]==Puzzle[i][j-1] && WordToFind[ActualWordLength-1]==Puzzle[i][j-ActualWordLength+1])
				{
				
	
				ResultRowIndices[k]=i;
				ResultColumnIndices[k]=j-k;
								
				}	
	
				//up to down words	
				if( WordToFind[0]==Puzzle[i][j] && WordToFind[1]==Puzzle[i+1][j] && WordToFind[ActualWordLength-1]==Puzzle[i+ActualWordLength-1][j])
				{
				
	
				ResultRowIndices[k]=i+k;
				ResultColumnIndices[k]=j;
								
				}
				
				//down to up words
				
				if( WordToFind[0]==Puzzle[i][j] && WordToFind[1]==Puzzle[i-1][j] && WordToFind[ActualWordLength-1]==Puzzle[i-ActualWordLength+1][j])
				{
				
	
				ResultRowIndices[k]=i-k;
				ResultColumnIndices[k]=j;
								
			       }

				//diagonal up right words
				
				if( WordToFind[0]==Puzzle[i][j] && WordToFind[1]==Puzzle[i-1][j+1] && WordToFind[ActualWordLength-1]==Puzzle[i-ActualWordLength+1][j+ActualWordLength-1])
				{
				
	
				ResultRowIndices[k]=i-k;
				ResultColumnIndices[k]=j+k;
								
				}
				//diagonal down right words
				
				if( WordToFind[0]==Puzzle[i][j] && WordToFind[1]==Puzzle[i+1][j+1] && WordToFind[ActualWordLength-1]==Puzzle[i+ActualWordLength-1][j+ActualWordLength-1])
				{
				
	
				ResultRowIndices[k]=i+k;
				ResultColumnIndices[k]=j+k;
								
				}
				//diagonal up left words
				if( WordToFind[0]==Puzzle[i][j] && WordToFind[1]==Puzzle[i-1][j-1] && WordToFind[ActualWordLength-1]==Puzzle[i-ActualWordLength+1][j-ActualWordLength+1])
				{
				
	
				ResultRowIndices[k]=i-k;
				ResultColumnIndices[k]=j-k;
								
				}

				//diagonal down left words
				
				if( WordToFind[0]==Puzzle[i][j] && WordToFind[1]==Puzzle[i+1][j-1] && WordToFind[ActualWordLength-1]==Puzzle[i+ActualWordLength-1][j-ActualWordLength+1])
				{
				
	
				ResultRowIndices[k]=i+k;
				ResultColumnIndices[k]=j-k;
								
				}
			}
	 	}
	
	}
					
	
	
	
		IsWordFound = true;		

   }
	return IsWordFound;
}

