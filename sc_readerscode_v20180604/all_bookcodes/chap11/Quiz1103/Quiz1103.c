#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char a[] = "hello";
  char b[] = {0, 1, 2, 3, 4, 5};
  char* heap = calloc(10, sizeof(char));
  char* c = heap + 4;

  c[0] = 'S';
  c[1] = 'C';

  free(heap);
  return 0;
}
