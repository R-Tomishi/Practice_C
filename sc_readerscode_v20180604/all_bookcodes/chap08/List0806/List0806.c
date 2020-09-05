#include <stdio.h>

void add(int x, int y)
{
  int ans = x + y;
  printf("%d + %d = %d\n", x, y, ans);
}

int main(void)
{
  int year = 2016;
  add(year, 4);   /* 変数yearと4を渡して関数addを呼び出す */
  add(year, 50);  /* 変数yearと50を渡して関数addを呼び出す */

  return 0;
}
