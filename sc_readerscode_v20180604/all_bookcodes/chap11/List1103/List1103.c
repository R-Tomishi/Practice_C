#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
  // 手段①
  char array[1024] = "C";     /* 配列宣言でメモリを確保 */
  char* msg1 = array;         // からくり構文②で先頭アドレス取得
  printf("%s", msg1);         // printf("%s", array)でも同じ意味になる

  // 手段②
  char* msg2 = (char*)malloc(1024);   /* mallocでメモリを確保 */
  msg2[0]= 'C';
  msg2[1] = '\0';
  printf("%s", msg2);
  free(msg2);                 // 確保したメモリの解放

  // 手段③
  const char* msg3 = "C";     /* リテラルでメモリを確保 */
  printf("%s", msg3);

  return 0;
}
/*-- WARNING-WITH-CLANG: -Wno-error=unused-variable -Wno-unused-variable --*/
/*-- WARNING-WITH-GCC: -Wno-error=unused-variable -Wno-unused-variable --*/
/*-- WARNING-WITH-VC: /wd4101 --*/
