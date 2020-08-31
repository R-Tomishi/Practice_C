#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

typedef char String[1024];

int main(void)
{
	srand((unsigned)time(0UL));
	printf("***数あてゲーム(レベル2)***\n");
	printf("3桁の数を当ててください!\n");
	int answer[3] = {rand() % 10, rand() % 10, rand() % 10};
	int input[3] = {};
	String In_n;

	String game_s;
	int game = 1;
	while (game == 1) {
		for (int i = 0; i < 3; i++) {
			printf("%d桁目の予想を0〜9の数字で入力してください：\n", i+1);
			scanf("%s", In_n);
			input[i] = atoi(In_n);
		}
		int hit = 0;
		int bro = 0;
		for (int i = 0; i < 3; i++) {
			if (input[i] == answer[i]) {
				hit += 1;
			}
			for (int j = 0; j < 3; j++) {
				if (input[i] == input[j] && i !=j) {
					bro +=1;
				}
			}
		}
		printf("%dヒット、%dブロー\n", hit, bro);
		if (hit == 3) {
			printf("%d%d%d正解です!!\n", answer[0], answer[1], answer[2]);
			break;
		}
		printf("続けますか?　（1:続ける 0:終了）:\n");
		scanf("%s", game_s);
		game = atoi(game_s);
	}
	printf("ゲーム終了。正解は%d%d%dでした\n", answer[0], answer[1], answer[2]);
	return 0;
}
