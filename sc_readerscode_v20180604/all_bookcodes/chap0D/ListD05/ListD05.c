#include <stdio.h>
#include <time.h>

int main(void)
{
  char* yobi[] = {"日", "月", "火", "水", "木", "金", "土"};
  struct tm* tm;
  time_t t = time(NULL);
  tm = localtime(&t);
  printf("%04d年%2d月%2d日 %s曜日 %2d時%2d分%2d秒\n",
         tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday,
         yobi[tm->tm_wday], tm->tm_hour, tm->tm_min, tm->tm_sec);
  return 0;
}
