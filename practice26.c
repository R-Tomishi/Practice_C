#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int main(void)
{
	char a[] = "hello";
	char b[] = {0, 1, 2, 3, 4, 5};
	char* heap = calloc(10, sizeof(char));
	char* c = heap + 4;

	printf("a:%p\nb:%p\nc:%p\n", a, b, c);
	c[0] = 'S';
	c[1] = 'C';

	free(heap);

	return 0;
}
