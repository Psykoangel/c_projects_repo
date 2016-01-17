#include <stdio.h>
#include <stdlib.h>

int divqot(int x, int y) // renvoie le quotient
{
  return (x / y);
}

main() {
  int a = 2, b = 5;
  printf("%d", divqot(a, b));
  return 0;
}
