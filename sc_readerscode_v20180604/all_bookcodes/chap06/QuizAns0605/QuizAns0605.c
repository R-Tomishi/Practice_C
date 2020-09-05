#include <stdio.h>
#include <stdbool.h>

typedef char String[1024];

int main(void)
{
  typedef struct {
    String title;   		// 件名
    String from;        // 送信元メールアドレス
    String datetime;  	// 受信日時
    int size;       		// サイズ(KB)
    bool attached;    	// 添付ファイルの有無
    String body;      	// 本文
  } Mail;

  Mail m = {"あけましておめでとう", "sugawara@miyabilink.jp",
      "2018/01/01 10:10:58", 302, false};

  printf("%sさんから、%sにメールです。サイズは%dKB、添付は%s。\n",
      m.from, m.datetime, m.size, m.attached ? "あり" : "なし");
  return 0;
}
