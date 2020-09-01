#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>

typedef char String[1024];

int main(void)
{
	char a[] = {49, 50, 51, 52, 53, 0};
	char b[] = "12345";
	int len_a = strlen(a);
	int len_b = strlen(b);

	printf("length_a=%d\n", len_a);
	printf("length_b=%d\n", len_b);

	if (strcmp(a, b) == 0) {
		printf("aとbは等しい\n");
	} else {
		printf("aとbは等しくない\n");
	}

	char* c = malloc(len_a + len_b + 1);
	strcpy(c, a);
	strcat(c, b);
	printf("%s", c);

	free(c);
	
	return 0;
}
