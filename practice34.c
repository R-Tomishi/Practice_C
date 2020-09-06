#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp;
	char wbuf[] = "0123456789";
	char rbuf[16];

	if ((fp = fopen("try.dat", "wb")) == NULL) {
		exit(1);
	}

	fwrite(wbuf, 10, 1, fp);
	fclose(fp);

	if ((fp = fopen("try.dat", "rb")) == NULL) {
		exit(1);
	}

	int cn = fread(rbuf, 1, 10, fp);

	rbuf[10] = '\0';

	fclose(fp);

	printf("%d個のデータを読み取りました：%s\n", cn, rbuf);

	return 0;
}
