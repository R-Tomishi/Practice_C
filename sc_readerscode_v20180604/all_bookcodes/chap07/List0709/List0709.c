#include <stdio.h>

typedef char String[1024];

int main(void)
{
  typedef struct {
    String name;
    int hp;
    int attack;
  } Monster;

  Monster seiryu = {"青龍", 80, 15};
  Monster suzaku = {"朱雀", 100, 30};
  Monster byakko = {"白虎", 100, 20};
  Monster genbu = {"玄武", 120, 10};

  Monster monsters[] = {suzaku, genbu, seiryu, byakko};
          /* 要素数4のモンスター配列型を作って初期化 */
  const String TEMPLATE = "%s：HP=%3d 攻撃力=%2d\n";
  for (int i = 0; i < 4; i++) {
    printf(TEMPLATE,
        monsters[i].name, monsters[i].hp, monsters[i].attack);
  }       /* ループでモンスターを順番に表示 */

  return 0;
}
/*-- WARNING-WITH-VC: /wd4204 --*/
