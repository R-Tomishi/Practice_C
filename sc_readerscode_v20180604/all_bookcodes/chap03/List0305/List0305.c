#include <stdio.h>

int main(void)
{
  float f = 3;      /* float型の変数にint型を代入 */
  double d = f;     /* double型の変数にfloat型を代入 */
  printf("%f\n", f);  /* 小数の場合は%fを使います */
  printf("%f\n", d);
  return 0;
}
