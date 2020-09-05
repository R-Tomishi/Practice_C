#include <stdio.h>
#include "sub.h"

int main(void) {
  printf("%s\n", selectMsg(createRand(3)));
  return 0;
}
