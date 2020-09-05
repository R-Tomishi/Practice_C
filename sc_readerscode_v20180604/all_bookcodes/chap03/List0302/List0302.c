#include <stdio.h>

int main(void)
{
  printf("私の好きな記号は"です");
          /* この部分だけが文字列と見なされる */
  return 0;
}
/*-- [注意] このコードはコンパイルに失敗します(ERROR-AT-COMPILE) --*/
/*-- WARNING-WITH-GCC: -Wno-invalid-pp-token --*/
/*-- WARNING-WITH-CLANG: -Wno-invalid-pp-token --*/
/*-- WARNING-WITH-VC: /wd4700 --*/
