#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int main(void)
{
	char str[1024] = "c language";
	int len = strlen(str);
	printf("%d\n", len);

	return 0;
}
