#include <stdio.h>

int main(void)
{
  int a[5] = {1, 2, 3, 4, 5};
  int b[5];
  for (int i = 0; i < 5; i++) {
    b[i] = a[i];    /* 要素を1つずつコピー */
  }
  return 0;
}
/*-- WARNING-WITH-GCC: -Wno-error=unused-but-set-variable -Wno-unused-but-set-variable --*/
