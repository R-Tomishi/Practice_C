#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp;
	char wbuf[64];

	if ((fp = fopen("memo.txt", "w")) == NULL) {
		exit(1);
	}

	fputs("government of the people, \nby the people,\nfor the people", fp);

	fclose(fp);

	if ((fp = fopen("memo.txt", "r")) == NULL) {
		exit(1);
	}

	while (fgets(wbuf, 64, fp) != NULL) {
		printf("%s", wbuf);
	}

	fclose(fp);
	return 0;
}
