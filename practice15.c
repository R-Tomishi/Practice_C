#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int* readyAges(void)
{
	int* ages = (int*) malloc(16);
	return ages;
}

int main(void)
{
	int* a = readyAges();
	if (a == NULL) {
		printf("ヒープ確保に失敗しました\n");
	} else {
		a[0] = 19;
		free(a);
	}

	return 0;
}
