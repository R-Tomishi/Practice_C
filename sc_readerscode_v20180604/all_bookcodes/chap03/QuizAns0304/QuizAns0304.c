#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
  printf("カレンダーから縦に並んだ数字を3つ選び、その合計を入力してください\n");
  String numStr;
  scanf("%s", numStr);
  int num = atoi(numStr) / 3;
  printf("あなたが選んだ数字は%dと%dと%dですね？\n", num - 7, num, num + 7);
  return 0;
}
