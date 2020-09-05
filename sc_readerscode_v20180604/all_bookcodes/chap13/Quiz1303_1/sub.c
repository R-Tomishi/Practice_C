#include <stdlib.h>
#include <time.h>

int createRand(int max)
{
  srand((unsigned)time(0UL));
  return (rand() % max) + 1;
}
