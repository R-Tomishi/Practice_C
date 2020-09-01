#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int main(void)
{
	int a[4] = {19, 20, 29, 29};
	int b[4];
	memcpy(b, a, 16);
	printf("配列aの2つ目の要素は:%d, %p番地に格納\n", a[1], &a[1]);
	printf("配列bの2つ目の要素は:%d, %p番地に格納\n", b[1], &b[1]);
	return 0;
}
