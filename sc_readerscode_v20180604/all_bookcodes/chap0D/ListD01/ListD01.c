#include <stdio.h>

typedef struct {
  int hp;
  char status;
} Monster;

enum {
  STATUS_POISON = 1,    // 2進数では00000001
  STATUS_SLEEP = 2,     // 2進数では00000010
  STATUS_SMALL = 4,     // 2進数では00000100
  STATUS_SILENT = 8     // 2進数では00001000
};

int main(void)
{
  Monster m;
  m.hp = 100;
  m.status = 0;         // 2進数では00000000（全フラグOFF）

  printf("モンスターは毒状態になった！\n");
  m.status |= STATUS_POISON;                /* ORでフラグを立てる */

  printf("モンスターは「眠り覚まし」を使った！\n");
  m.status &= ~STATUS_SLEEP;                /* NOTとANDでフラグを倒す */

  printf("毒が効いてきた！\n");
  printf("（毒状態ならダメージを2だけ受ける）\n");
  if (m.status & STATUS_POISON) m.hp -= 2;  /* ANDでフラグ判定 */

  printf("「奇跡の石」を使った！\n");
  printf("（毒状態または眠りなら、HPを100回復）\n");
  if (m.status & (STATUS_POISON | STATUS_SLEEP)) m.hp = 100;
                                            /* 複数フラグの状況を一括して判定 */
  return 0;
}
