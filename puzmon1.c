/*=== puzmon0: ソースコードひな形 ===*/
/*** インクルード宣言 ***/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*** 列挙型宣言 ***/
enum {FIRE, WATER, WIND, EARTH, LIFE, EMPTY};
/*** グローバル定数の宣言 ***/
const char ELEMENT_SYMBOLS[] = {'$', '~', '@', '#', '&', ' '};
const int ELEMENT_COLORS[] = {1, 6, 2, 3, 5, 0};
const int MAX_GEMS = 14;
const char alpha[MAX_GEMS+1] = {"ABCDEFGHIJKLMN"};

int HP;
int EneHP;
int EneMaxHP;

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

//ダンジョン構造体
typedef struct {
  Monster* monsterAddr;
  int monsterCnt;
} Dungeon;

Dungeon dungeonList[] = {
  {&monsterList[0], sizeof(monsterList) / sizeof(Monster)}
};

typedef struct {
  int element;
  int stIndex;
  int length;
} BanishInfo;

typedef struct {
  Monster* partyAddr;
  int partyCnt;
  Monster* monsterAddr;
  int monsterCnt;
  int* slot;
  BanishInfo* BaniInfo;
} BattleField;

/*** プロトタイプ宣言 ***/
void showBattleField(Monster* mAddr, int HP, int EneHP, int EneMaxHP, BattleField field);
void checkValidCommand(void);
void evaluateGems(BattleField field, char before, char after);

/*** 関数宣言 ***/

// モンスターに色をつける関数
void printMonsterName(Monster* m)
{
  printf("\x1b[3%dm%c%s%c\x1b[39m", ELEMENT_COLORS[m->element], ELEMENT_SYMBOLS[m->element], m->name, ELEMENT_SYMBOLS[m->element]);
}

// プレイヤーの攻撃を管理する関数
int doAttack(char* playerName, Monster* mAddr, int HP)
{
  int attack = 80;
  printf("ダミーの攻撃で%dのダメージを与えた\n\n", attack);
  return attack;
}

// プレイヤのターンを管理する関数
int onPlayerTurn(char* playerName, Monster* mAddr, int HP, int EneHP, int EneMaxHP, BattleField field)
{
    printf("[%sのターン]\n\n", playerName);
    showBattleField(mAddr, HP, EneHP, EneMaxHP, field);

    char cmd[10];
    while(true){
      printf("コマンド?>\n");
      scanf("%s", cmd);
      if (cmd[0] != cmd[1] && cmd[0] >= 65 && cmd[0] <= 78 && cmd[1] >= 65 && cmd[1] <= 78 && cmd[2] == 0)
      {
        break;
      } else {
        printf("コマンドエラー!もう一度入力してください\n");
      }
    }
    evaluateGems(field, cmd[0], cmd[1]);

    int attack = doAttack(playerName, mAddr, HP);
    return attack;
}

// 敵の攻撃を管理する関数
int doEnemyAttack(Monster* mAddr, int HP)
{
  int attack = 20;
  printf("%dのダメージを受けた\n\n", attack);
  return attack;
}

// 敵のターンを管理する関数
int onEnemyTurn(Monster* mAddr, int HP)
{
    printf("[%sのターン]\n\n", mAddr->name);
    int attack = doEnemyAttack(mAddr, HP);
    return attack;
}

// モンスターとバトルする関数
int doBattle(char* playerName, Monster* mAddr, int HP, BattleField field)
{
  printMonsterName(mAddr);
  printf("が現れた!\n\n");

  int EneHP = mAddr->hp;
  int EneMaxHP = mAddr->hp;

  while (true) {
    int Edamage = onPlayerTurn(playerName, mAddr, HP, EneHP, EneMaxHP, field);
    EneHP -= Edamage;
    if (EneHP <= 0) {
      printMonsterName(mAddr);
      printf("を倒した\n\n");
      break;
    }

    int Pdamage = onEnemyTurn(mAddr, HP);
    HP -= Pdamage;
    if (HP <= 0) {
      break;
    }
  }
  return HP;
}


// ダンジョンで闘う関数
void goDungeon(char* playerName, int HP, BattleField field)
{
  printf("\n");
  int clear_cnt = 0;
  //　敵モンスターとのバトル
  for (int i = 0; i < dungeonList[0].monsterCnt; i++) {
    int presentHP = doBattle(playerName, &monsterList[0]+i, HP, field);
    HP = presentHP;

    if (presentHP <= 0) {
      printf("%sはダンジョンから逃げ出した\n\n", playerName);
      printf("***GAME OVER***\n\n");
      break;
    } else {
        clear_cnt += 1;
        if (i == (dungeonList[0].monsterCnt-1)) {
          printf("%sはダンジョンを制覇した\n\n", playerName);
          printf("***GAME CLEARED***\n\n");
        } else {
          printf("%sはさらに奥に進んだ\n\n", playerName);
          printf("=================\n\n");
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
  printf("%sのパーティ(HP=%d)はダンジョンに到着した\n\n", playerName, sumHP);
  return sumHP;
}

// パーティ編成情報の一覧表示関数
void showParty(Monster* partyAddr, int partysize)
{
  printf("<パーティ編成>---------\n");
  for (int i = 0; i < partysize; i++) {
    printMonsterName(partyAddr+i);
    printf(" HP=%d 攻撃=%d 防御=%d\n", (partyAddr+i)->hp, (partyAddr+i)->attack, (partyAddr+i)->defense);
  }
  printf("----------------------\n\n");
}

// 新しい宝石を生み出す関数
int fillGems(void)
{
  return rand() % 5;
}

// 宝石を表示するための関数
void printGem(int gem)
{
  printf("\x1b[4%dm%c\x1b[49m ", ELEMENT_COLORS[gem], ELEMENT_SYMBOLS[gem]);
}

// 宝石の並びを示す関数
void printGems(int MAX_GEMS, BattleField field)
{
  for (int i = 0; i < MAX_GEMS; i++) {
    printGem(*(field.slot+i));
  }
  printf("\n");
}

// バトルフィールドの状況を画面に表示する関数
void showBattleField(Monster* mAddr, int HP, int EneHP, int EneMaxHP, BattleField field)
{
  int MaxHP = 0;
  for (int i = 0; i < field.partyCnt; i++) {
    MaxHP += (field.partyAddr+i)->hp;
  }

  printf("------------------------------\n");
  printf("          ");
  printMonsterName(mAddr);
  printf("          \n");
  printf("        HP= %d / %d           \n\n\n\n", EneHP, EneMaxHP);
  for (int i = 0; i < field.partyCnt; i++) {
    printMonsterName(field.partyAddr+i);
    printf(" ");
  }
  printf("\n");
  printf("        HP= %d / %d           \n\n", HP, MaxHP);
  printf("------------------------------\n\n");
  for (int i = 0; i < MAX_GEMS; i++) {
    printf("%c ", alpha[i]);
  }
  printf("\n");

  printGems(MAX_GEMS, field);
  printf("\n");
  printf("------------------------------\n");
}

//宝石の位置を入れ替える関数
void swapGem(BattleField field, int before1, int before_ind, int after_ind)
{
  int preGems[MAX_GEMS];
  for (int i = 0; i < MAX_GEMS; i++) {
    preGems[i] = *(field.slot+i);
  }

  if ((after_ind-before_ind) > 0){
    int before_val = preGems[before1];
    int move_val = preGems[before1+1];
    preGems[before1+1] = before_val;
    preGems[before1] = move_val;
  } else {
    int before_val = preGems[before1];
    int move_val = preGems[before1-1];
    preGems[before1-1] = before_val;
    preGems[before1] = move_val;
  }
  // for (int i = 0; i < MAX_GEMS; i++) {
  //   printf("%d ", preGems[i]);
  // }
  memcpy(field.slot, &preGems[0], 100);
  printGems(MAX_GEMS, field);
}

//宝石を移動させる関数
void moveGem(BattleField field, int before_ind, int after_ind)
{
  if ((after_ind-before_ind) > 0){
    for (int i = 0; i < (after_ind-before_ind); i++) {
      swapGem(field, before_ind+i, before_ind, after_ind);
      }
    } else {
        for (int i = 0; i > (after_ind-before_ind); i--) {
          swapGem(field, before_ind+i, before_ind, after_ind);
        }
    }
}

// 消去した宝石のスロットにランダムの宝石を充填する
void spawnGems(BattleField field)
{
  int preGems[MAX_GEMS];
  int element = field.BaniInfo->element;
  int start = field.BaniInfo->stIndex;
  int length = field.BaniInfo->length;

  for (int i = 0; i < MAX_GEMS; i++) {
    preGems[i] = *(field.slot+i);
  }

  for (int i = 0; i < MAX_GEMS; i++) {
    if (preGems[i] == 5) {
      preGems[i] = rand() % 5;
    }
  }
  memcpy(field.slot, &preGems[0], 100);
  printGems(MAX_GEMS, field);
}

//宝石を左詰する関数
void shiftGems(BattleField field)
{
  int preGems[MAX_GEMS];
  int element = field.BaniInfo->element;
  int start = field.BaniInfo->stIndex;
  int length = field.BaniInfo->length;

  for (int i = 0; i < MAX_GEMS; i++) {
    preGems[i] = *(field.slot+i);
  }
  for (int j = 0; j < length + 1; j++) {
    for (int i = 0; i < (MAX_GEMS-length-start); i++){
      preGems[start+length+i-j] = preGems[start+length+i+1-j];
    }
    preGems[MAX_GEMS-1-j] = 5;
    memcpy(field.slot, &preGems[0], 100);
    printGems(MAX_GEMS, field);
  }
}

//宝石を消去する関数
void banishGems(BattleField field)
{
  int preGems[MAX_GEMS];
  int element = field.BaniInfo->element;
  int start = field.BaniInfo->stIndex;
  int length = field.BaniInfo->length;

  for (int i = 0; i < MAX_GEMS; i++) {
    preGems[i] = *(field.slot+i);
  }

  for (int i = start; i <= (start + length); i++) {
    preGems[i] = 5; //無属性を代入
  }
  memcpy(field.slot, &preGems[0], 100);
  printGems(MAX_GEMS, field);
}

// 宝石の並びを調べて消去可能な箇所があることを判断する関数
bool checkBanishable(BattleField field)
{
  int preGems[MAX_GEMS];
  int element = 0;
  int start = 0;
  int length = 0;

  for (int i = 0; i < MAX_GEMS; i++) {
    preGems[i] = *(field.slot+i);
  }

  for (int i = 0; i < (MAX_GEMS-1); i++) {
    element = preGems[i];
    if (element == preGems[i+1]) {
      length += 1;
      start = i + 1 - length;
    }
    if (length <=1 && element != preGems[i+1]) {
      length = 0;
      start = 0;
    }
    if (length >= 2 && element != preGems[i+1]) {
      break;
    }
  }
  BanishInfo Info = {element, start, length};
  memcpy(field.BaniInfo, &Info, 12);
  if (length >= 2) {
    return true;
  }
  return false;
}

// 宝石を移動して配列の並びを変更する関数
void evaluateGems(BattleField field, char before, char after)
{
  int preGems[MAX_GEMS];
  int before_ind = before - 65;
  int after_ind = after -65;
  for (int i = 0; i < MAX_GEMS; i++) {
    preGems[i] = *(field.slot+i);
  }

  moveGem(field, before_ind, after_ind);
  bool banish = checkBanishable(field);
  if (banish) {
    banishGems(field);
    shiftGems(field);
    spawnGems(field);
    }
}

int main(int argc, char** argv)
{
  srand((unsigned)time(0UL));
  // 起動時の名前入力
	char* playerName = argv[argc-1];
  if (argc == 2){
    // printf("%s\n", playerName);
    printf("*** Puzzle & Monsters ***\n\n");

    // パーティ構成
    Monster* partyList[] = {&suzaku, &seiryu, &byakko, &genbu};

    int gems[MAX_GEMS];
    for (int i = 0; i < MAX_GEMS; i++) {
      gems[i] = fillGems();
    }

    BanishInfo BaniInfo = {5, 0, 0};

    // バトルフィールドの構造体をここで定義(パーティ編成が可変の可能性があるので)
    BattleField field = {partyList[0], sizeof(partyList) / sizeof(partyList[0]),
                         &monsterList[0], sizeof(monsterList) / sizeof(Monster),
                         &gems[0], &BaniInfo};

    int HP = organaizePaty(playerName, field.partyAddr, field.partyCnt);

    showParty(field.partyAddr, field.partyCnt);
    // ダンジョンの開始から終わり
    goDungeon(playerName, HP, field);

  } else {
    printf("エラー:./a.outの後にスペースを入れてプレイヤー名を指定してください\n");
  }
  return 0;
}

/*** ユーティリティ関数宣言***/
