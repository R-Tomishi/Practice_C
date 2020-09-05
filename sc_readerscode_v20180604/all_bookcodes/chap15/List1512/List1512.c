/**
  @file misaki_sub.c
  @brief 岬のサブルーチン
  @author 岬悠馬
  @date 2018/05/31
  @details さまざまな計算を行う
*/
#include <stdio.h>

/**
  @brief multi
  @param[in] a 掛けられる数
  @param[out] b 掛ける数
  @return int 掛け算の答え
  @details 掛け算をする
*/
int multi(int a, int b)
{
  int ans = 0;
  for (int count = 1; count <= b; count++) {
    ans = ans + a;
  }
  return ans;
}
