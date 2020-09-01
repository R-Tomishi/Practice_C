#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

void printIntByAddress(int* add)
{
	printf("int型の格納されている数値は%d\n", *add);
	printf("int型のアドレスは%ld\n", (long)add);
}

int main(void)
{
	int add = 10;
	printIntByAddress(&add);
	return 0;
}
