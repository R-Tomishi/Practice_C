#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
  int temp = 30;
  int ansNo = 1;
  String answer;

  while (ansNo == 1) {
    printf("現在の設定温度：%d\n", temp);
    printf("暑いですか？　Yes=1　No=0\n");
    scanf("%s", answer);
    ansNo = atoi(answer);
    if (ansNo == 1) {
      temp = temp - 1;
    } else {
      printf("設定を終了します\n");
    }
  }
  return 0;
}
