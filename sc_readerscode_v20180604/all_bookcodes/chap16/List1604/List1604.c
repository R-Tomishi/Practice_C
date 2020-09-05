#include <stdio.h>
#include <time.h>

int main(void)
{
  time_t timer = time(NULL);     // 現在時刻の取得

  printf("Content-type: text/html\n\n");
  printf("<HTML>\n");
  printf("<BODY>\n");
  printf("Now...%s", ctime(&timer));  // 時刻を文字列に変換して出力
  printf("</BODY>\n");
  printf("</HTML>\n");

  return 0;
}
