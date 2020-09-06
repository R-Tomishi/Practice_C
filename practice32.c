#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp;
	char text[] = "sukkiriC!";
	int len = strlen(text);
	int ch;

	if ((fp = fopen("memo.txt", "w")) == NULL) {
		exit(1);
	}

	for (int i = 0; i < len; i++) {
		fputc(text[i], fp);
	}

	fclose(fp);

	if ((fp = fopen("memo.txt", "r")) == NULL) {
		exit(1);
	}

	while ((ch = fgetc(fp)) != EOF) {
		putchar((char)ch);
	}

	fclose(fp);
	return 0;
}
