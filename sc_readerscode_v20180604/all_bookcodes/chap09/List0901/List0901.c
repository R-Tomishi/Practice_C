#include <stdio.h>

int main(void)
{
  int a = 70;
  printf("変数aには70が入っています\n");
                            /* 変数aのアドレスを取得して代入    */
  long addrA = (long)&a;    /* (long型に入れるために要キャスト) */
  printf("変数aのアドレス: %ld\n", addrA);
  return 0;                 /* long型のプレースホルダ */
}
