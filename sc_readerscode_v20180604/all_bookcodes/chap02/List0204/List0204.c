#include <stdio.h>

int main(void)
{
  int age = 20;       /// 変数ageを20で初期化
  printf("私の年齢は%d\n", age);
  age = 31;           /// 再度31を代入
  printf("…いや、本当の年齢は%d\n", age);
  return 0;
}
