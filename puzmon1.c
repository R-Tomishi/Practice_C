/*=== puzmon0: ソースコードひな形 ===*/
/*** インクルード宣言 ***/

#include <stdio.h>
#include <stdbool.h>

/*** 列挙型宣言 ***/
enum {FIRE, WATER, WIND, EARTH, LIFE, EMPTY};

/*** グローバル定数の宣言 ***/
const char ELEMENT_SYMBOLS[] = {'$', '~', '@', '#', '&', ' '};
const int ELEMENT_COLORS[] = {1, 6, 2, 3, 5, 0};

/*** 構造体型宣言 ***/
typedef struct {
  char name[30];
  int hp;
  int hpMax;
  int element;
  int attack;
  int defense;
} Monster;

Monster monsterList[] = {
  {"スライム", 100, 100, 1, 10, 5},
  {"ゴブリン", 200, 200, 3, 20, 15},
  {"オオコウモリ", 300, 300, 2, 30, 25},
  {"ウェアウルフ", 400, 400, 2, 40, 30},
  {"ドラゴン", 800, 800, 0, 50, 40},
};

typedef struct {
  Monster* monsterAddr;
  int monsterCnt;
} Dungeon;

Dungeon dungeonList[] = {
  {&monsterList[0], sizeof(monsterList) / sizeof(Monster)}
};

/*** プロトタイプ宣言 ***/
/*** 関数宣言 ***/

// モンスターに色をつける関数
void printMonsterName(Monster* m)
{
  printf("\x1b[3%dm%c%s%c\x1b[39m", ELEMENT_COLORS[m->element], ELEMENT_SYMBOLS[m->element], m->name, ELEMENT_SYMBOLS[m->element]);
}

bool doBattle(Monster* mAddr)
{
  printMonsterName(mAddr);
  printf("が現れた!\n");
  printMonsterName(mAddr);
  printf("を倒した!\n");
  return true;
}

void goDungeon(char* playerName)
{
  printf("%sはダンジョンに到着した\n", playerName);

  //　敵モンスターとのバトル
  for (int i = 0; i < dungeonList[0].monsterCnt; i++) {
    doBattle(&monsterList[0]+i);
  }
  // doBattle(&m2);
  // doBattle(&m3);
  // doBattle(&m4);
  // doBattle(&m5);

  printf("%sはダンジョンを制覇した\n", playerName);
  printf("***GAME CLEARED***\n");
  printf("倒したモンスター数=%d\n", 5);

}

int main(int argc, char** argv)
{
// 起動時の名前入力
	char* playerName = argv[argc-1];
  if (argc == 2){
    // printf("%s\n", playerName);
    printf("*** Puzzle & Monsters ***\n");

    // ダンジョンの開始から終わり
    goDungeon(playerName);

  } else {
    printf("エラー:./a.outの後にスペースを入れてプレイヤー名を指定してください\n");
  }


  return 0;
}

/*** ユーティリティ関数宣言***/
