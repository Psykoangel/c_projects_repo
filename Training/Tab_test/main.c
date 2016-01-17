#include <stdio.h>
#include <stdlib.h>

void affichetab(int tab[][50]) {

  int i, j;
  for (j = 0; j < 50; j++) {
    for (i = 0; i < 50; i++) {
      printf("%d", tab[i][j]);
    }
  }
}

int main() {

  int tab[50][50] = {0};
  affichetab(tab);

  return EXIT_SUCCESS;
}
