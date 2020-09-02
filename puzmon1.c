/*=== puzmon0: ソースコードひな形 ===*/
/*** インクルード宣言 ***/

#include <stdio.h>
#include <stdbool.h>

/*** 列挙型宣言 ***/
/*** グローバル定数の宣言 ***/
/*** 構造体型宣言 ***/
/*** プロトタイプ宣言 ***/
/*** 関数宣言 ***/

bool doBattle(char* enemy)
{
  printf("%sが現れた!\n", enemy);
  printf("%sを倒した!\n", enemy);
  return true;
}

void goDungeon(char* playerName)
{
  printf("%sはダンジョンに到着した\n", playerName);

  //　敵モンスターとのバトル
  doBattle("スライム");
  doBattle("ゴブリン");
  doBattle("オオコウモリ");
  doBattle("ウェアウルフ");
  doBattle("ドラゴン");

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
