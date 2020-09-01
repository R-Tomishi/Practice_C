#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int main(void)
{
	//手段1
	char array[1024] = "C";
	char* msg1 = array;
	printf("%s\n", msg1);
	printf("%p\n", msg1);

	//手段2
	char* msg2 = (char*)malloc(1024);
	msg2[0] = 'C';
	msg2[1] = '\0';
	printf("%s\n", msg2);
	printf("%p\n", msg2);
	free(msg2);

	//手段3
	const char* msg3 = "C";
	printf("%s\n", msg3);
	printf("%p\n", msg3);

	return 0;
}
