#include <stdio.h>
#include <string.h>

typedef char String[1024];

int main(void)
{
  char str[1024] = "c language";  /* 確保したメモリは1024バイト */
  int len = strlen(str);
  printf("%d\n", len);

  return 0;
}
