#include <stdio.h>

int* readyAges(void)
{
  int ages[4];            // (2)要素数4のint配列を作成（仮に1000-1015番地）
  return ages;            // (3)先頭アドレス（1000）を返す
}                         // (4)関数終了に伴い1000-1015番地の確保が解除される

int main(void)
{
  int* a = readyAges();   // (1)配列作成を依頼
  a[0] = 19;              /* (5)1000-1003番地に19を格納してしまう！ */
  return 0;
}
/*-- WARNING-WITH-CLANG: -Wno-error=return-stack-address -Wno-return-stack-address --*/
/*-- WARNING-WITH-GCC: -Wno-error=return-local-address -Wno-return-local-address --*/
