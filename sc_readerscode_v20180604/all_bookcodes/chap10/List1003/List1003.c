#include <stdio.h>
#include <string.h>

int main(void)
{
  int a[4] = {19, 20, 29, 29};
  int b[4] = {19, 20, 29, 29};
  int r = memcmp(a, b, 16);     /* 16バイト分を比較 */
  if (r == 0) {
    printf("memcmpで比較した結果、等しいです\n");
  }
  if (a == b) {
    printf("==演算子で比較した結果、等しいです\n");
  }

  return 0;
}
