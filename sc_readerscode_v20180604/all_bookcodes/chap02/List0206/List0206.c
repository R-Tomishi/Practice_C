#include <stdio.h>

int main(void)
{
  const int TAX = 108;  /* 定数として税率を設定 */
  int fax = 50000;
  printf("50,000円から40,000円に値下げします¥n");
  TAX = 40000;          /* コンパイルエラーが発生、間違いに気づく */
  printf("FAXの新価格（税込）: %d円¥n", fax * TAX / 100);
  return 0;
}
/*-- [注意] このコードはコンパイルに失敗します(ERROR-AT-COMPILE) --*/
