#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp;
	int wbuf = 100;
	int rbuf;

	if ((fp = fopen("try.dat", "wb")) == NULL) {
		exit(1);
	}

	fwrite(&wbuf, sizeof(int), 1, fp);
	fclose(fp);

	if ((fp = fopen("try.dat", "rb")) == NULL) {
		exit(1);
	}

	int cn = fread(&rbuf, sizeof(int), 1, fp);

	fclose(fp);

	printf("%d個のデータを読み取りました：%d\n", cn, rbuf);

	return 0;
}
