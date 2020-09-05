#include <stdio.h>

typedef char String[1024];

int main(void)
{
  String seiryuName = "青龍";
  int seiryuHp = 100;
  int seiryuAttack = 20;
  String suzakuName = "朱雀";
  int suzakuHp = 100;
  int suzakuAttack = 30;
  String byakkoName = "白虎";
  int byakkoHp = 100;
  int byakkoAttack = 10;
  String genbuName = "玄武";
  int seiryuHp = 100;        /* コンパイルエラー（コピペのせいで変数名が重複） */
                             /* 攻撃力の変数を用意し忘れている */
}
/*-- [注意] このコードはコンパイルに失敗します(ERROR-AT-COMPILE) --*/
/*-- WARNING-WITH-CLANG: -Wno-error=unused-variable -Wno-unused-variable --*/
/*-- WARNING-WITH-GCC: -Wno-error=unused-variable -Wno-unused-variable --*/
/*-- WARNING-WITH-VC: /wd4101 --*/
