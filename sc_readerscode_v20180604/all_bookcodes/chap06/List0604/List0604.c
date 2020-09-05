#include <stdio.h>

int main(void)
{
  typedef struct {       /* ある座標を表す構造体型を定義 */
    int x;
    int y;
  } Point;

  Point p1 = {50, 70};
  p1++;                 /* x=51 y=71としたいが、エラー */

  return 0;
}
/*-- [注意] このコードはコンパイルに失敗します(ERROR-AT-COMPILE) --*/
