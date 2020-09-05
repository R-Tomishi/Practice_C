#include <stdio.h>

void hello(void)  /* 関数helloの本体 */
{
  printf("こんにちは\n");
}

int main(void)   /* main関数 */
{
  printf("関数を呼び出します\n");
  hello();       /* 関数helloを呼び出す */
  printf("関数の呼び出しが終わりました\n");

  return 0;
}
