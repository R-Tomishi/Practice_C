#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

void funcA(int x)
{
	x = 100;
}

void funcB(int x[3])
{
	x[0] = 100;
}

int main(void)
{
	int a = 5;
	int b[3];
	b[0] = 5;
	
	funcA(a);
	funcB(b);

	printf("a=%d, b[0]=%d\n", a, b[0]);
	return 0;
}
