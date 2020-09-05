#include <stdio.h>

int add(int x, int y)    /* 2つの引数を受け取って処理し、1つのint値を返す表明 */
{
  int ans = x + y;
  return ans;            /* 変数ansに入っている合計値を戻す */
}

int main(void)
{
  int year = 2016;
  add(year, 4);
  add(year, 50);

  return 0;
}
