#include <stdio.h>

int main(void)
{
  typedef int IntX10[10]; /* int[10]型にIntX10という別名を与える */
  IntX10 gems;            /* int gems[10];と同じ */

  gems[1] = 3;
  printf("%d\n", gems[1]);
  return 0;
}
