#include <stdio.h>
#include <stdlib.h>

int main() {

  int tableau[] = {5, 6, 9, 12, 54, 58, 69, 565, 58, 49, 56};
  int max, i;

  for (i = 1, max = tableau[0]; i < 10;
       (tableau[i] > max) ? max = tableau[i++] : i++)
    ; // Operateur ternaire

  printf("%d\n", max);
}
