#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int main(int argc, char** argv)
{
	printf("argc=%d\n", argc);
	for (int i = 0; i < argc; i++) {
		char* strAddr = argv[i];
		printf("%d番目の情報: %s\n", i, strAddr);
	}
	return 0;
}
