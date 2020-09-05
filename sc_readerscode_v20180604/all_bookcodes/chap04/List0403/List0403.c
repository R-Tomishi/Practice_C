#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool tenki = true;
  if (tenki == true) {    /* 内容が2行なので波カッコは省略不可 */
    printf("洗濯をします\n");
    printf("散歩に行きます\n");
  } else                  /* 内容が1行なので波カッコは省略可能 */
    printf("映画を観ます\n");
  return 0;
}
