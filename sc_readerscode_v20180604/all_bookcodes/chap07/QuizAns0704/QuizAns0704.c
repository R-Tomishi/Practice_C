#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
  srand((unsigned)time(0UL));

  printf("***数当てゲーム（レベル2）***\n");
  printf("3桁の数を当ててください！\n");

  const int TIMES = 3;
  int answer[TIMES];
  int input[TIMES];

  /* 答えを決定  */
  for (int i = 0; i < TIMES; i++) {
    answer[i] = rand() % 10;
  }

  do {
    /* 結果を初期化 */
    int hit = 0;
    int blow = 0;

    /* 予想を設定 */
    for (int j = 0; j < TIMES; j++) {
      printf("%d桁目の予想を0〜9の数字で入力してください：", j + 1);
      String inputStr;
      scanf("%s", inputStr);
      input[j] = atoi(inputStr);
    }

    /* 答えあわせ */
    for (int i = 0; i < TIMES; i++) {
      if (answer[i] == input[i])
      {
        hit++;
      }
      for (int j = 0; j < TIMES; j++) {
        if (input[i] == answer[j] && i != j) {
          blow++;
        }
      }
    }

    /* 結果発表 */
    printf("%dヒット！ %dブロー！\n", hit, blow);
    if (hit == 3) {
      printf("正解です！\n");
      break;
    } else {
      printf("続けますか？（1：続ける　0：終了）：");
      String retryStr;
      scanf("%s", retryStr);
      if(atoi(retryStr) == 0) {
        printf("正解は%d%d%dでした！\n", answer[0], answer[1], answer[2]);
        break;
      }
    }
  } while (true);

  return 0;
}
