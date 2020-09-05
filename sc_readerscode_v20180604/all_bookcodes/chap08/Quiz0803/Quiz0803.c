#include <stdio.h>

void takeBus(void)
{
  printf("バスに乗ります。\n");
}

void run(void)
{
  printf("走ります！\n");
}

void walk(void)
{
  printf("ちょっと歩きます。\n");
}

int main(void)
{
  printf("行ってきます！\n");
  walk();
  takeBus();
  run();
  run();
  printf("ただいま。\n");

  return 0;
}
