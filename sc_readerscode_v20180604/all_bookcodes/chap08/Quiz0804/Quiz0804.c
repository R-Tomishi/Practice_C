#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
  int amount;    // 支払総額
  int people;    // 参加人数
  int pay;       // 1人あたりの支払額
  int payorg;    // 幹事の支払額

  String inputStr;
  double dnum;

  // 計算データの入力
  printf("支払総額を入力してください：");
  scanf("%s", inputStr);
  amount = atoi(inputStr);

  printf("参加人数を入力してください：");
  scanf("%s", inputStr);
  people = atoi(inputStr);

  // 割り勘の計算
  dnum = (double)amount / people;  // 総額を人数で割る(端数も保持)
  pay = (int)(dnum / 100) * 100;   // 100円未満を切り捨ててみる
  if (dnum > pay) {                // 元の値と比較して小さいか
    pay = pay + 100;               // 100円未満があったので上乗せ
  }

  // 幹事の支払額を計算
  payorg = amount - pay * (people - 1);

  // 結果の表示
  printf("*** 支払額 ***\n");
  printf("1人あたり%d円（%d人）、幹事は%d円です。\n", pay, people - 1, payorg);

  return 0;
}
