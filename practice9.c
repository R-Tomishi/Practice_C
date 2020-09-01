#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

int main(void)
{
	printf("%dバイト\n", (int)(sizeof(char)));
	printf("%dバイト\n", (int)(sizeof(int)));
	printf("%dバイト\n", (int)(sizeof(char*)));
	printf("%dバイト\n", (int)(sizeof(int*)));
	return 0;
}
