void printMonsterSummary(Monster* m)
{
  printf("モンスター %s (HP=%d)", (*m).name, (*m).hp);
}                                 /* 指定アドレスにある情報にアクセス */

int main(void)
{
  Monster suzaku = {"朱雀", 100, 80, …ここに約100項目… };
  printMonsterSummary(&suzaku);   /* suzakuのアドレスを渡す */
  return 0;
}
