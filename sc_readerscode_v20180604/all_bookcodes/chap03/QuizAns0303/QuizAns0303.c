#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  printf("4桁の暗証番号を生成します\n");
  srand((unsigned)time(0UL));
  int a = rand() % 10;
  int b = rand() % 10;
  int c = rand() % 10;
  int d = rand() % 10;
  printf("暗証番号：%d%d%d%d\n", a, b, c, d);
  return 0;
}
