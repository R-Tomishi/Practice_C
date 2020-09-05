#include <stdio.h>

int add(int x, int y)
{
  int ans = x + y;
  return ans;
}

int main(void)
{
  int year = 2016;

  int ans1;
  ans1 = add(year, 4);      /* addの結果が変数ans1に代入される */
  printf("%d年の%d年後は%d年です\n", year, 4, ans1);
  
  int ans2 = add(year, 50); /* 変数宣言と同時に呼び出してもよい */
  printf("%d年は%d年の%d年後です\n", ans2, year, 50);

  return 0;
}
