/**
	@file test.c
	@breif サブルーチン
	@author ほにゃらら
	@date 2020/09/07
	@details 様々計算する
*/

#include <stdio.h>

/**
	@brief multi
	@param[in] a かけられる数
	@param[out] b かける数
	@return int 掛け算の答え
	@details 掛け算をする
*/

int multi (int a, int b)
{
	int ans = 0;
	for (int count = 1; count <= b; count++) {
		ans = ans + a;
	}
	return ans;
}
