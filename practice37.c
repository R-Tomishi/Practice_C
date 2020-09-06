#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	FILE* fp;
	char header[54] = {};
	char image[192] = {};

	header[0] = 66;
	header[1] = 77;

	int* di;
	di = (int*)(header + 2);
	*di = 246;
	di = (int*)(header + 10);
	*di = 54;
	di = (int*)(header + 14);
	*di = 40;
	di = (int*)(header + 18);
	*di = 8;
	di = (int*)(header + 22);
	*di = 8;

	short* ds;
	ds = (short*)(header + 26);
	*ds = 1;
	ds = (short*)(header + 28);
	*ds = 24;

	for (int i = 0; i < 192; i+=3) {
		image[i] = -1;
		image[i+1] = 0;
		image[i+2] = 0;
	}

	if ((fp = fopen("bluebox.bmp", "wb")) == NULL) {
		exit(1);
	}

	fwrite(&header, 54, 1, fp);
	fwrite(&image, 192, 1, fp);

	fclose(fp);

	return 0;
}
