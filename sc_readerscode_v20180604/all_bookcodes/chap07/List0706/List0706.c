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
  }

  // 次に宝石10個の内容を画面に表示
  for (int i = 0; i < 10; i++) {
    switch (gems[i]) {
      case FIRE:            /* FIRE(0)なら$ */
        printf("$");
        break;
      case WATER:           /* WATER(1)なら* */
        printf("*");
        break;
      case WIND:            /* WIND(2)なら@ */
        printf("@");
        break;
      case EARTH:           /* EARTH(3)なら# */
        printf("#");
        break;
    }
    printf(" ");           // 見やすいようにスペースを入れる
  }

  return 0;
}
