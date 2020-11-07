#include<stdio.h>

int test()
{
  int data = 0;
  data++;
  return data;
}

int main()
{
  printf("data = %d\n", test());
  printf("data = %d\n", test());

  return 0;
}
