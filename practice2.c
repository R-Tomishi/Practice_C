#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

bool isleapYear(int year)
{
	bool TorF;
	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
			TorF = true;
	} else {
			TorF = false;
	}
	return TorF;
}

int main(void)
{
	int year = 2200;
	bool leapyear = isleapYear(year);
	if (leapyear) {
		printf("%dはうるう年です\n", year);
	} else {
		printf("%dはうるう年ではありません\n", year);
	}

	return 0;
}
