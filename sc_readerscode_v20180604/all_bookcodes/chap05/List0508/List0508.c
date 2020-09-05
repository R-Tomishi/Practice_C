#include <stdio.h>

int main(void)
{
  printf("1〜4までカウントします\n");
  printf("1\n");
  goto END;             /* ENDという場所にジャンプしろ */
  printf("2\n");
  printf("3\n");
  printf("4\n");
END:                    /* ラベルEND */
  printf("カウント終了\n");
  return 0;
}
/*-- WARNING-WITH-CLANG: -Wno-error=unreachable-code -Wno-unreachable-code --*/
/*-- WARNING-WITH-GCC: -Wno-error=unreachable-code -Wno-unreachable-code --*/
/*-- WARNING-WITH-VC: /wd4702 --*/
