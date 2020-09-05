#include <stdio.h>
#include <time.h>

int main(void)
{
  time_t t = time(NULL);
  printf("time関数で取得した値：%ld\n", t);
  return 0;
}
