#include <stdio.h>

void funcB(void)
{
  printf("関数Bです\n");
}

void funcA(void)
{
  printf("関数Aです\n");
  funcB();      /* 関数Bの呼び出し */
}

int main(void)
{
  funcA();      /* 関数Aの呼び出し */
  return 0;
}
