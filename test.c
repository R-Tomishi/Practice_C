#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int main(void)
{
	char str[1024] = "hello";
	char* p = str;
	printf("%s, %s\n", str, p);
	printf("%p\n", p);
	return 0;
}
