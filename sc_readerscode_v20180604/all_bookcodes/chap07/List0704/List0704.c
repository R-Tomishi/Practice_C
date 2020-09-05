#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(0UL));         // 乱数生成の準備
  enum { FIRE, WATER, WIND, EARTH };  // 宝石の属性を表す定数(0〜3)
  int gems[10];

  // 宝石をランダムに生成
  for (int i = 0; i < 10; i++) {
    int gemType = rand() % 4;
    gems[i] = gemType;
  }      /* ループのたびにiの値が0〜9で変化する */

  return 0;
}
/*-- WARNING-WITH-GCC: -Wno-error=unused-but-set-variable -Wno-unused-but-set-variable --*/
