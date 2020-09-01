#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

typedef struct {
	String name;
	int hp;
	int attack;
	//ここに100近いメンバ
} Monster;

void printMonsterSummary(Monster* m)
{
	printf("モンスター %s (HP= %d)\n", (*m).name, (*m).hp);
}

int main(void)
{
	Monster suzaku = {"朱雀", 100, 80};
	printMonsterSummary(&suzaku);
	return 0;
}
