#include <stdio.h>

int main(void)
{
  double d = 8.5 / 2;   /* 2（int型）を2.0（double型）に変換 */
  long l = 5 + 2L;      /* 5（int型）を5L（long型）に変換 */
  printf("%f\n", d);
  printf("%ld\n", l);   /* long型の場合は%ldを使用します */
  return 0;
}
