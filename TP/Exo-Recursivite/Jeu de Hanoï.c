#include <stdio.h>
#include <stdlib.h>

void Th(int n, char T1, char T2, char T3) {
  if (n == 1)
    printf("Deplacer anneaux au sommet de %c vers %c\n", T1, T3);
  else {
    Th(n - 1, T1, T3, T2);
    printf("Deplacer anneaux au sommet de %c vers %c\n", T1, T3);
    Th(n - 1, T2, T1, T3);
  }
}

int main() {
  Th(1000, 'A', 'B', 'C');

  return 0;
}
