#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(0UL));
  int r = rand() % 100;
  printf("あなたはたぶん、%d歳ですね？\n", r);
  return 0;
}
