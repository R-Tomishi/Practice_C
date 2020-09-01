#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

int main(void)
{
	int a = 70;
	printf("変数aには%dが入っています\n", a);
	int* addrA = &a;
	printf("変数aのアドレス:%p\n", addrA);
	printf("%p番地に格納されている情報:%d\n", addrA, *addrA);
	return 0;
}
