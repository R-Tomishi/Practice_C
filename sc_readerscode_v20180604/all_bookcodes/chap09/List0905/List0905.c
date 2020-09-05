#include <stdio.h>

typedef char String[1024];

typedef struct {
  String name;
  int hp;
  int attack;
   :                    /* 実際には100近いメンバを持つはず*/
} Monster;

void printMonsterSummary(Monster m)
{
  printf("モンスター %s (HP=%d)", m.name, m.hp);
}

int main(void)
{
  Monster suzaku = {"朱雀", 100, 80,  …ここに約100項目… };
  printMonsterSummary(suzaku);
  return 0;
}
