#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#include "practice31_1.h"

int main(void)
{
	int max = 3;
	int num = createRand(max);
	char* rem = selectMsg(num);

	printf("%s", rem);
	return 0;
}
