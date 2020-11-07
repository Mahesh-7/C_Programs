#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <stdint.h> 

int main() 
{ 
  
  printf("%x```\n",72);
  
  char  msg[] = "helloworld";
  
  uint8_t * ptr=(uint8_t*)&msg;
  
  uint16_t * p= ((uint16_t *)ptr) ;
  
  printf("%c %c",p[0],p[1]);  //h l
  
  //(uint32_t)ptr++;
  ptr++;ptr++;
  
  printf("\n%c %c",ptr[2],ptr[3]);  // o w
  
  return 0; 
  
  int a=5;
  a&=~(1<<2);
  printf("\n%c %c",ptr[2],ptr[3]);  // o w
  
  
} 
