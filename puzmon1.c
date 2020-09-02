/*=== puzmon0: ソースコードひな形 ===*/
/*** インクルード宣言 ***/

#include <stdio.h>
#include <stdbool.h>

/*** 列挙型宣言 ***/
enum {FIRE, WATER, WIND, EARTH, LIFE, EMPTY};

/*** グローバル定数の宣言 ***/
const char ELEMENT_SYMBOLS[] = {'$', '~', '@', '#', '&', ' '};
const int ELEMENT_COLORS[] = {1, 6, 2, 3, 5, 0};

int HP;

/*** 構造体型宣言 ***/
typedef struct {
  char name[30];
  int hp;
  int hpMax;
  int element;
  int attack;
  int defense;
} Monster;

//パーティのモンスターリスト
Monster suzaku = {"朱雀", 150, 150, 0, 25, 10};
Monster seiryu = {"青龍", 150, 150, 2, 15, 10};
Monster byakko = {"白虎", 150, 150, 3, 20, 5};
Monster genbu = {"玄武", 150, 150, 1, 20, 15};

//ダンジョン1のモンスターリスト
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

// モンスターとバトルする関数
bool doBattle(Monster* mAddr, int HP)
{
  printMonsterName(mAddr);
  printf("が現れた!\n");
  printMonsterName(mAddr);
  printf("を倒した!\n");
  printf("HPは%d\n", HP);
  if (HP > 0) {
    return false;
  } else {
    return true;
  }
}

// ダンジョンで闘う関数
void goDungeon(char* playerName, int HP)
{
  printf("%sはダンジョンに到着した\n", playerName);
  int clear_cnt = 0;
  //　敵モンスターとのバトル
  for (int i = 0; i < dungeonList[0].monsterCnt; i++) {
    bool GameOVER = doBattle(&monsterList[0]+i, HP);

    if (GameOVER) {
      printf("%sはダンジョンから逃げ出した\n", playerName);
      printf("***GAME OVER***\n");
      break;
    } else {
        clear_cnt += 1;
        if (i == (dungeonList[0].monsterCnt-1)) {
          printf("%sはダンジョンを制覇した\n", playerName);
          printf("***GAME CLEARED***\n");
        } else {
          printf("%sはさらに奥に進んだ\n", playerName);
          printf("=================\n");
        }
      }
    }
    printf("倒したモンスター数=%d\n", clear_cnt);
}

// 味方とパーティ情報を渡すと、それによって編成されたパーティを返す関数
int organaizePaty(char* playerName, Monster* partyAddr, int partysize)
{
  int sumHP = 0;
  for (int i = 0; i < partysize; i++) {
    sumHP += (partyAddr+i)->hp;
  }
  printf("%sのパーティ(HP=%d)はダンジョンに到着した\n", playerName, sumHP);
  return sumHP;
}

// パーティ編成情報の一覧表示関数
void showParty(Monster* partyAddr, int partysize)
{
  printf("<パーティ編成>----------\n");
  for (int i = 0; i < partysize; i++) {
    printMonsterName(partyAddr+i);
    printf(" HP=%d 攻撃=%d 防御=%d\n", (partyAddr+i)->hp, (partyAddr+i)->attack, (partyAddr+i)->defense);
  }
  printf("----------------------\n");
}


int main(int argc, char** argv)
{
// 起動時の名前入力
	char* playerName = argv[argc-1];
  if (argc == 2){
    // printf("%s\n", playerName);
    printf("*** Puzzle & Monsters ***\n");

    // パーティ構成
    Monster* partyList[] = {&suzaku, &seiryu, &byakko, &genbu};
    int HP = organaizePaty(playerName, partyList[0], sizeof(partyList) / sizeof(partyList[0]));

    showParty(partyList[0], sizeof(partyList) / sizeof(partyList[0]));
    // ダンジョンの開始から終わり
    goDungeon(playerName, HP);

  } else {
    printf("エラー:./a.outの後にスペースを入れてプレイヤー名を指定してください\n");
  }
  return 0;
}

/*** ユーティリティ関数宣言***/
