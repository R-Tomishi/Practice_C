#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

int iscanf(void)
{
	String inputStr;
	int n;
	scanf("%s", inputStr);
	n = atoi(inputStr);
	return n;
}


int calcPayment(int amount, int people)
{
	int dnum;
	int pay;
	dnum = (double)amount / people;
	pay = (int)(dnum / 100) * 100;
	if (dnum > pay) {
		pay = pay + 100;
	}
	return pay;
}

void showPayment(int pay, int payorg, int people)
{
	printf("***支払額***\n");
	printf("1人あたり%d円 (%d人), 幹事は%d円です。\n", pay, people - 1, payorg);
}

int main(void)
{
	printf("支払い総額を入力してください:\n");
	int amount = iscanf();

	printf("参加人数を入力してください:\n");
	int people = iscanf();

	int pay = calcPayment(amount, people);

	int payorg = amount - pay * (people - 1);

	showPayment(pay, payorg, people);

	return 0;
}
