#include<stdio.h>
#include <string.h>

/*  memcopy function
	
	int memcpy(void* dst, const void* src, unsigned int cnt)
{
    uint8_t *pszDest = (uint8_t *)dst;
    const uint8_t *pszSource =( const uint8_t*)src;
    while(cnt)
    {
        *(pszDest++)= *(pszSource++);
        cnt--;
    }
    return 0;
}

*/


int main()
{
    char pszMessage[]  = "Welcome to aticleworld!";//Source String   //in pointer doesnt change values becaz .txt and .ds memory segment mixed 
    char aszDisplayMessage[32]= {0}; //Destination string
    short siLenString=0;  //
    siLenString = strlen(pszMessage)+1; // length of source string
    memmove(aszDisplayMessage, pszMessage,siLenString );//copy source to destination
    printf("Message = %s\n", aszDisplayMessage);
    
    
    char *src = "hello";
    char dst[12] = {0};
    memcpy(dst,src,12);
    
    printf("\n\n%s\n\n",dst);
    
   // char src1[20] ="aticleworld.com";
   // char* dst1=0 ;  //doesnt give output
   // memcpy(dst1,src1,sizeof(src1));
    
   //  printf("\n\n%s\n\n",dst1);
     
	int iLoop = 0;
    int aiSrc [5]  = {100,200,300,400,500};//integer array
    int aiDst[5]= {0}; //Destination array
    memcpy(aiDst, aiSrc,sizeof(aiSrc));//copy integer array
    for(iLoop =0; iLoop <5 ; iLoop++) //print
    {
        printf(" %d ",aiDst[iLoop]);
    }
    
    
    return 0;
}

