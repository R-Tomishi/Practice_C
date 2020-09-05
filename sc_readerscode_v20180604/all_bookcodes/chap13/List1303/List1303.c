#include <stdio.h>

#define PI 3.1415

int main(void)
{
  printf("%f", 2 * 2 * PI);  /* プリコンパイル時に、PIが3.1415に置き換えられる */
  return 0;
}
