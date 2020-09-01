#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int main(void)
{
	int a[4] = {19, 20, 29, 29};
	int b[4] = {19, 20, 29, 29};
	int r = memcmp(a, b, 16);
	if (r == 0) {
		printf("memcmpで比較した結果、等しいです\n");
	}
	// if (a == b) {
	// 	printf("==演算子で比較した結果、等しいです\n");
	// }
	return 0;
}
