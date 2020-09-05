#include <stdio.h>

int main(void)
{
  for (int i = 1; i < 10; i++) {    /* iは1～9を繰り返す */
    for (int j = 1; j < 10; j++) {  /* jも1～9を繰り返す */
      printf("%d ", i * j);
    }
    printf("\n");
  }
  return 0;
}
