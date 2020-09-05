#include <stdio.h>

int local_counter(void)
{
  int cntr = 0;
  cntr++;
  return cntr;
}

int static_counter(void)
{
  static int cntr = 0;   // static付き
  cntr++;
  return cntr;
}

int main(void) {
  int lnum = 0;
  int snum = 0;

  for (int i = 1; i <= 3; i++) {
    lnum = local_counter();
    snum = static_counter();
    printf("%d回目 local：%d static：%d\n", i, lnum, snum);
  }
  return 0;
}
