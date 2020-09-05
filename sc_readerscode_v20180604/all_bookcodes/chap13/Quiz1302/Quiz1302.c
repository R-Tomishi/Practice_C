#include <stdio.h>

void sub(void)
{
  printf("これはsubです。\n");
}

int main(void)
{
  printf("これはmainです。\n");
  sub();
  return 0;
}
