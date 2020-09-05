#include <stdio.h>

int main(void)
{
  int a = 70;
  printf("変数aには70が入っています\n");

  int* addrA = &a;     /* int*型にaのアドレスを代入 */
  printf("変数aのアドレス: %p\n", addrA);
  printf("%p番地に格納されている情報: %d\n", addrA, *addrA);
                       /* addrA番地から4バイト分のメモリの内容を取り出す */
  return 0;
}
