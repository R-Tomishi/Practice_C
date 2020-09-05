#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(0UL));         // 乱数生成の準備
  enum { FIRE, WATER, WIND, EARTH };  // 宝石の属性を表す定数(0〜3)
  const char GEM_CHARS[] = {'$', '*', '@', '#'};
  int gems[10];            /* 属性に対応した表示用の文字を配列に格納 */

  // 宝石をランダムに生成
  for (int i = 0; i < 10; i++) {
    int gemType = rand() % 4;
    gems[i] = gemType;
  }

  // 次に宝石10個の内容を画面に表示
  for (int i = 0; i < 10; i++) {
    printf("%c ", GEM_CHARS[gems[i]]);
  }        /* char型を流し込むためのプレースホルダ(pXXX) */

  return 0;
}
