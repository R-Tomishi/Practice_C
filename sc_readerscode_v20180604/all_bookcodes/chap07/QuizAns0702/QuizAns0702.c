#include <stdio.h>

int main(void)
{
  enum {LEN = 5};   //  const定数は配列確保時に使えないため
  int scores[LEN] = {88, 61, 90, 75, 93};
  int sum = 0;
  int max = scores[0];
  int min = scores[0];

  for (int i = 0; i < LEN; i++) {
    sum = sum + scores[i];

    if (max < scores[i]) {
      max = scores[i];
    }
    if (min > scores[i]) {
      min = scores[i];
    }
  }

  printf("最高点：%d\n", max);
  printf("最低点：%d\n", min);
  printf("平均点：%.2f\n", (double)sum / LEN);
  return 0;
}
