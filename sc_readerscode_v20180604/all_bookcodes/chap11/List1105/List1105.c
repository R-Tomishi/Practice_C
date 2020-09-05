#include <stdio.h>

typedef char String[1024];

int main(void)
{
  char str[1024];
  sprintf(str, "%8s HP= %04d / %04d", "misaki", 50, 1200);

  // このあと、strの内容をファイルに書き込むなどして利用する

  return 0;
}
