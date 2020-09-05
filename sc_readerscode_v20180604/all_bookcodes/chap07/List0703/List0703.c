#include <stdio.h>

int main(void)
{
  int i;                            /* 変数の初期値は不定 */
  printf("変数iの内容：%d\n", i);
  int a[5];                         /* 配列の要素も初期値は不定 */
  printf("配列a要素[0]の内容：%d\n", a[0]);
  return 0;
}
/*-- WARNING-WITH-CLANG: -Wno-error=uninitialized -Wno-uninitialized --*/
/*-- WARNING-WITH-GCC: -Wno-error=uninitialized -Wno-uninitialized --*/
/*-- WARNING-WITH-VC: /wd4700 --*/
