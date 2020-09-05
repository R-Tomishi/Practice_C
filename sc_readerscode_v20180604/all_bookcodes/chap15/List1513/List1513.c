#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
  return a - b;
}

int main(void)
{
  char* str = (char *)malloc(3);
  str[3] = -1;

  int x = 0;
  if (x != 0) { printf("something wrong?\n"); }

  return 0;
}
