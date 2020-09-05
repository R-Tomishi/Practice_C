#include <stdio.h>

#define DEBUG_MODE 5

int main(void)
{
  int x = 0;

#ifdef DEBUG_MODE        /* DEBUG_MODEが宣言されていれば有効 */
  printf("This is DEBUG MODE!\n");
#endif

#ifndef DEBUG_MODE       /* DEBUG_MODEが宣言されていなければ有効 */
  printf("This is RELEASE MODE!\n");
#endif

#if (DEBUG_MODE == 1)    /* DEBUG_MODEが1のとき有効 */
  x = 1;
#elif (DEBUG_MODE == 2)  /* DEBUG_MODEが2のとき有効 */
  x = 2;
#elif (DEBUG_MODE == 3)  /* DEBUG_MODEが3のとき有効 */
  x = 3;
#else
  x = 9;
#endif

  printf("%d", x);
  return 0;
}
