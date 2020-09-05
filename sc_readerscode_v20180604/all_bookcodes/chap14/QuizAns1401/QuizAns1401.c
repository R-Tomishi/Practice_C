#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  FILE* fpr;
  FILE* fpw;

  if (argc != 3) {
    printf("ファイルを2つ指定してください。\n");
    exit(1);
  }

  // 読み取り専用バイナリモードで開く
  if ((fpr = fopen(argv[1], "rb")) == NULL) {
    printf("コピー元ファイルを開けません。\n");
    exit(1);
  }

  // 書き込み専用バイナリモードで開く
  if ((fpw = fopen(argv[2], "wb")) == NULL) {
    fclose(fpr);         /* エラーならコピー元ファイルを閉じる */
    printf("コピー先ファイルを開けません。\n");
    exit(1);
  }

  // コピー元ファイルの終わりまで読み書きを繰り返す
  int ch;
  while ((ch = fgetc(fpr)) != EOF) {
    fputc(ch, fpw);
  }

  fclose(fpr);
  fclose(fpw);
  return 0;
}
