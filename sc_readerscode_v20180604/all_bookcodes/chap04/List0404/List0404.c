#include <stdio.h>
#include <stdbool.h>
typedef char String[1024];

int main(void)
{
  String answer;
  printf("かっこよくて最高な、C言語系男子の名前は?\n");
  scanf("%s", answer);
  if (answer == "ミサキ") {    /* 入力された文字が「ミサキ」か判定 */
    printf("大正解！　見る目あるね！\n");
  } else {
    printf("残念。\n");
  }
  return 0;
}
