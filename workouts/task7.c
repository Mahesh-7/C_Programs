#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//vowels find  tasks
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

//int main()
//{
//    int N,i,j;
//    char WORD[101]; 
//    scanf("%d", &N); 
//    fgetc(stdin);
//    for ( i = 0; i < N; i++)
//    {
//        
//        fgets(WORD, 101, stdin);
//        
//        for( j=0;j<101;j++)
//        {
//            if(WORD[j]=='A'||'E'||'U'||'O'||'I'||'a'||'e'||'u'||'o'||'i')
//            {
//            	printf("%c",WORD[j]);
//            	break;
//			}
//			else
//			{
//				printf("NONE");
//			}
//        }
//    }
//
//    // Write an action using printf(). DON'T FORGET THE TRAILING \n
//    // To debug: fprintf(stderr, "Debug messages...\n");
//
//   // printf("answer\n");
//
//    return 0;
//}

void main()

{
	int i,j;
	unsigned char b,a='a';
	b|=(((a&0x0f) << 4)| (a&0xf0)>>4);
	printf("%c\n",b);
	printf("%d\n",a<<4);
	printf("%d\n",a);
	
	
//	for(i=0;i<8;i++)
//	{
//		printf("%d ",0xff&((a>>i)&1));
//	}
	
}
