#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

void walk(void);

void takeBus(void)
{
	printf("バスに乗ります。\n");
}

void run(void)
{
	printf("走ります。\n");
	walk();
}

void walk(void)
{
	printf("ちょっと歩きます。\n");
}

int main(void)
{
	printf("行ってきます!\n");
	walk(); takeBus(); run(); run();
	printf("ただいま。\n");

	return 0;
}
