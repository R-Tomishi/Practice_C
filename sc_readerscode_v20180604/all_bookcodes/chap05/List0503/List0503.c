#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  printf("あなたの運勢を占います\n");
  srand((unsigned)time(0UL));
  int fortune = rand() % 5 + 1;   /* 1〜5の乱数発生 */

  switch (fortune) {
    case 1:                      /* fortuneが1か2なら… */
    case 2:
      printf("いいね！\n");
      break;
    case 3:                      /* fortuneが3なら… */
      printf("普通です\n");
      break;
    case 4:                      /* fortuneが4か5なら… */
    case 5:
      printf("うーん…\n");
  }
  return 0;
}
