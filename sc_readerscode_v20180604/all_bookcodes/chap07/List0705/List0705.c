#include <stdio.h>

int main(void)
{
  int scores[] = {75, 57, 90, 46, 82};  /* 5科目のテスト結果 */
  int sum = 0;                          /* 合計を0でリセット */
  for (int i = 0; i < 5; i++) {
    sum += scores[i];                   /* 1科目ずつsumに足していく */
  }
  int avg = sum / 5;                    /* 合計を科目数で割る */
  printf("合計点：%d\n", sum);
  printf("平均点：%d\n", avg);
  return 0;
}
