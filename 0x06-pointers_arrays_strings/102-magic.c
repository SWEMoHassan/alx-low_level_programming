#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * New line of code:
   * Set the value at memory address (p + 5) to 98
   */
  *(p + 5) = 98;
  /* ...so that this prints a[2] = 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}

