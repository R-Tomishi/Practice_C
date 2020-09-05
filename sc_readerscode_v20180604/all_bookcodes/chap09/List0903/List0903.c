#include <stdio.h>

int main(void)
{
  int a = 70;
  printf("変数aには70が入っています\n");

  void* addrA = (void*)&a;     /* void*型にaのアドレスを代入 */
  printf("変数aのアドレス: %p\n", addrA);
  printf("%p番地に格納されている情報: %d\n", addrA, *addrA);
                              /* addrA番地のメモリの内容を取り出す？ */
  return 0;
}
