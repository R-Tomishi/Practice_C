#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool doorClosed = true;
  while (doorClosed == true) {   /* 扉が閉まっている間は… */
    printf("ノックする\n");
    printf("1分待つ\n");
  }                             /* 6行目でtrueを代入した場合、  */
  return 0;                     /* 無限に繰り返されますので     */
}                               /* Ctrl+Cで強制終了してください */
