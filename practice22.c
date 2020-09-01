#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int main(void)
{
	char str[1024];
	sprintf(str, "%8s HP= %04d / %04d\n", "misaki", 50, 1200);
	printf("%s", str);
	return 0;
}
