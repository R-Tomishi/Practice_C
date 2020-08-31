#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

int main(void)
{
	int a = 70;
	printf("変数aには%dが入っています\n", a);
	void* addrA = (void*)&a;
	printf("変数aのアドレス:%p\n", addrA);
	return 0;
}
