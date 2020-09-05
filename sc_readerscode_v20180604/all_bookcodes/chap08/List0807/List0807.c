#include <stdio.h>

void hello()           /* 引数にvoidを書き忘れている */
{
  printf("こんにちは\n");
}

int main(void)
{
  hello(); 
  return 0;
}
