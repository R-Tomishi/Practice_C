#include <stdio.h>

int main(void)
{
  const int MONEY = 3000;
  int pocket = MONEY;

  printf("リンゴ　");
  while (pocket >= 120) {
    printf("*");
    pocket = pocket - 120;
  }
  printf("　余りは%d円\n", pocket);

  pocket = MONEY;
  printf("ミカン　");
  while (pocket >= 400) {
    for (int i= 1; i <= 6; i++) {
      printf("*");
    }
    pocket = pocket - 400;
  }
  printf("　余りは%d円\n", pocket);
  return 0;
}
