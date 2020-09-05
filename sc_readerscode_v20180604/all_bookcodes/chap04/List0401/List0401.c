#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool tenki = true;
  if (tenki == true) {    /* もし変数tenkiがtrueだったら… */
    printf("洗濯をします\n");
    printf("散歩に行きます\n");
  } else {                /* そうでなければ… */
    printf("映画を観ます\n");
  }
  return 0;
}
