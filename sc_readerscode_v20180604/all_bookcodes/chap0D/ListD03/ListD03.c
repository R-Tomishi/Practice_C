#include <stdio.h>

double sub(int m, int n)
{
  return (double)m / n;
}

int main(void)
{                     /* sub_addrを宣言してsubのアドレスを格納 */
  double (*sub_addr)(int, int) = sub;
  printf("関数subの結果:%f\n", sub_addr(5, 4));
  return 0;           /* sub_addrに()演算子を適用して関数呼び出し */
}
