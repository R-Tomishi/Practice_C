#include <stdio.h>
#include <stdlib.h>  // exitを呼び出すために必要

int main(void)
{
  FILE* fp;

  fp = fopen("memo.txt", "r");
  if (fp == NULL) {
    printf("ファイルを開けませんでした\n");
    exit(1);         // エラーなら異常終了
  } else {
    printf("ファイルを開きました\n");
  }

  fclose(fp);

  return 0;
}
