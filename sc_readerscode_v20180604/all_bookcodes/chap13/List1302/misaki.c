#include <stdio.h>
#include "akagi.c"  /* プリコンパイル時にakagi.cの内容に置き換えられる */

int main(void)
{
  akagi();
  printf("misaki!");
  return 0;
}
