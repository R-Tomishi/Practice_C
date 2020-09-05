#include <stdio.h>

int main(int argc, char** argv)
{
  printf("argc=%d\n", argc);
  for (int i = 0; i < argc; i++) {
    char* strAddr = argv[i];        /* i番目の文字列の先頭アドレスを取得*/
    printf("%d番目の情報: %s\n", i, strAddr);
  }
  return 0;
}
