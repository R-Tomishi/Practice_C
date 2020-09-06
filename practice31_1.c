#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "practice31_1.h"

int createRand(int max)
{
	srand((unsigned)time(0UL));
	return (rand() % max) +1;
}

char* selectMsg(int num)
{
	char* rem;

	switch (num) {
		case 1:
			rem = "When you give up, that's when the game is over.\n";
			break;
		case 2:
			rem = "He stole something quite precious...your store.\n";
			break;
		case 3:
			rem = "There's only one truth!\n";
			break;
	}
	return rem;
}
