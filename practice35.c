#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	FILE* fpr;
	FILE* fpw;

	int (argc != 3) {
		printf("ファイルを2つ指定してください。\n");
		exit(1);
	}

	if ((fpr = fopen(argv[1], "rb") == NULL)) {
		printf("コピー元ファイルを開けません。\n");
		exit(1);
	}

	if ((fpw = fopen(argv[2], "wb") == NULL)) {
		fclose(fpr);
		printf("コピー先のファイルを開けません。\n");
		exit(1)
	}

	int ch;
	while ((ch = fgetc(fpr)) != EOF) {
		fputc(ch, fpw);
	}

	fclose(fpr);
	fclose(fpw);
	
	return 0;
}
