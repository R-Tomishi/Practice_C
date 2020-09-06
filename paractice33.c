#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[16];
	int height;
	double sight;
} Csv;

int main(void)
{
	FILE* fp;
	char filename[] = "data.csv";

	Csv data[3] = {
		{"Kaitou", 180, 1.5},
		{"Misaki", 173, 0.6},
		{"Akagi", 161, 1.0}
	};

	if ((fp = fopen(filename, "w")) == NULL) {
		exit(1);
	}

	for (int i = 0; i < 3; i++) {
		int cn = fprintf(fp, "%s, %d, %4.2f\n", data[i].name, data[i].height,
						 				data[i].sight);
		if (cn < 0) {
			printf("書き込みに失敗しました\n");
			fclose(fp);
			exit(1);
		} else {
			printf("%sさん:%d文字を書き込みました\n", data[i].name, cn);
		}
	}

	fclose(fp);
	return 0;
}
