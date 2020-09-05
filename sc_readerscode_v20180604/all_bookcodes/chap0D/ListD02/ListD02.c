#include <stdio.h>

int main(void)
{
  void* addr = main;    // main関数のアドレスを取得
  printf("main関数を格納したメモリの先頭アドレス:%p\n", addr);
  return 0;
}
