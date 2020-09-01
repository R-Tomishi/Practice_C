#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int main(void)
{
	char str1[] = "hello\0ABC";
	char str2[] = "hello\0DEF";
	if (strcmp(str1, str2) == 0) {
		printf("文字列として等しい");
	}

	return 0;
}
