#include <stdio.h>

void printIntByAddress(int* valAddr)
{
  printf("格納されている値：%d\n", *valAddr);
}

int main(void)
{
  int num = 999;
  printIntByAddress(&num);
  return 0;
}
