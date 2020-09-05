#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
  printf("***数当てゲーム（レベル１）***\n回答のチャンスは4回までです\n1桁の数を入力してください：");
  srand((unsigned)time(0UL));
  int answer = rand() % 10;
  int input;
  String inputStr;

  for (int i = 1; i <= 4; i++) {
    scanf("%s", inputStr);
    input = atoi(inputStr);
    if (answer == input) {
      printf("当たり！%d回目の入力でした\n", i);
      break;
    } else if (answer < input) {
      printf("はずれ！答えはもっと小さな数です\n");
    } else {
      printf("はずれ！答えはもっと大きな数です\n");
    }
  }
  if (answer != input) {
    printf("答えは%dでした\n", answer);
  }
  return 0;
}
