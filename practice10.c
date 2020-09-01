#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

void funcB(void) {
	int b = 20;
	printf("b-address: %ld\n", (long)&b);
}

void funcA(void) {
	int a = 10;
	printf("a-address: %ld\n", (long)&a);
	funcB();
}


int main(void)
{
	funcA();
	return 0;
}
