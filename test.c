#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

void hello(void)
{
	printf("こんにちは\n");
}

int main(void)
{
	printf("関数を呼び出します\n");
	hello();
	printf("関数の呼び出しが終わりました\n");

	return 0;
}
