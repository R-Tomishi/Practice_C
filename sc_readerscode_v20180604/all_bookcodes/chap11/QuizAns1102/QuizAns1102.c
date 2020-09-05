#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char a[] = {49, 50, 51, 52, 53, 0};
  char b[] = "12345";

  // (1)長さを表示
  printf("aの長さ：%ld　bの長さ：%ld\n", strlen(a), strlen(b));

  // (2)内容が等しいかを比較
  if (strcmp(a, b) == 0) {
    printf("文字列aとbは文字列として等しいです。\n");
  }

  // (3)ヒープ領域に必要分のみ確保
  char* c = malloc(strlen(a) + strlen(b) + 1);

  // (4)abをcに格納
  strcpy(c, a);       // まずcにaをコピー
  strcat(c, b);       // 次にcにbを連結

  // (5)メモリ解放
  free(c);

  return 0;
}
