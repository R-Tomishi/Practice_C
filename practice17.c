#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

void sub(char* addr)
{
	for (int i = 0; i < 3; i++) {
		printf("%d番目:%d, アドレスは%ld\n", i+1, *(addr+i), (long)(addr+i));
	}
}


int main(void)
{
	char a[] = {1, 2, 3};
	char b[3];
	// char* b = (char*) malloc(16);
	sub(&a[0]);
	memcpy(&b[0], &a[0], 3);
	sub(&b[0]);
	if (memcmp(&b[0], &a[0], 3) == 0) {
		printf("正常にコピーされました\n");
	}
	// free(b);
	return 0;
}
