#include <stdio.h>

int add(int x, int y)
{
  int ans = x + y;
  return ans;

  printf("addを終了します\n");    /* この文は実行されることがない */
}

int main(void)
{
  add(1, 2);
  return 0;
}
