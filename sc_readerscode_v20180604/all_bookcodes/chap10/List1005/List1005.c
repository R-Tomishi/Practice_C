#include <stdio.h>
#include <stdlib.h>

int* readyAges(void)
{
  int* ages = (int*)malloc(16);   /* (2)ヒープに16バイト確保（仮に9000-9015番地） */
  return ages;                    // (3)先頭アドレス（9000）を返す
}                                 // (4)関数が終了しても、ヒープの9000-9015番地は解放されない

int main(void)
{
  int* a = readyAges();           // (1)配列作成を依頼
  if (a == NULL) {
    printf("ヒープ確保に失敗しました\n");
  } else {
    a[0] = 19;                    // (5)9000-9003番地に19を格納
    free(a);                      /* (6)使用済みのヒープ領域を解放 */
  }

  return 0;
}
