#include <stdio.h>

int main(void)
{
  int x;
  printf("%d\n", x);   // 代入しないまま表示
  return 0;
}
/*-- WARNING-WITH-GCC: -Wno-uninitialized --*/
/*-- WARNING-WITH-CLANG: -Wno-uninitialized --*/
/*-- WARNING-WITH-VC: /wd4700 --*/
