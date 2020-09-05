#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int r = rand() % 100;
  printf("あなたはたぶん、%d歳ですね？\n", r);
  return 0;
}
