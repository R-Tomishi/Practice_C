#include <stdio.h>

typedef char String[1024];

int main(void)
{
  char name[1024];
  int hp;
  printf("名前とHPをカンマ区切りで入力してください。\n");
  scanf ("%s,%d", name, &hp);
  printf("入力された名前:%s\n入力されたHP:%d\n", name, hp);

  return 0;
}
