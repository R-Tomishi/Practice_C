#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE* fp;
  char wbuf[64];

  // 書き込み専用でオープン
  if ((fp = fopen("memo.txt", "w")) == NULL) {
    exit(1);
  }

  fputs("government of the people, \nby the people, \nfor the people", fp);

  fclose(fp);

  // 読み取り専用でオープン
  if ((fp = fopen("memo.txt", "r")) == NULL) {
    exit(1);
  }

  while (fgets(wbuf, 64, fp) != NULL) {
    printf("%s", wbuf);    // 標準出力(画面)に表示
  }

  fclose(fp);

  return 0;
}
