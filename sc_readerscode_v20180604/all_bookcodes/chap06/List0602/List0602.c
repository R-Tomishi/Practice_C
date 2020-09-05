#include <stdio.h>

typedef char String[1024];

int main(void)
{
  struct MONSTER {        /* 構造を定めMONSTERというタグ名を付ける*/
    String name;
    int hp;
    int attack;
  };

  struct MONSTER seiryu;  /* 「struct MONSTER型」を使い4つの変数を生成 */
  struct MONSTER suzaku;
  struct MONSTER byakko;
  struct MONSTER genbu;

  return 0;
}
/*-- WARNING-WITH-CLANG: -Wno-error=unused-variable -Wno-unused-variable --*/
/*-- WARNING-WITH-GCC: -Wno-error=unused-variable -Wno-unused-variable --*/
/*-- WARNING-WITH-VC: /wd4101 --*/
