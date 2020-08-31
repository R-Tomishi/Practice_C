#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

void funcB(void)
{
	printf("関数Bです\n");
}

void funcA(void)
{
	printf("関数Aです\n");
	funcB();
}

int main(void)
{
	funcA();
	return 0;
}
