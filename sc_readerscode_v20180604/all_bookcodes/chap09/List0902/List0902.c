#include <stdio.h>

int main(void)
{
  int a = 70;
  printf("変数aには70が入っています\n");

  void* addrA = (void*)&a;     /* void*型にaのアドレスを代入 */
  printf("変数aのアドレス: %p\n", addrA);
  return 0;             /* アドレス専用のプレースホルダ */
}
