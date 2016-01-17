#include <stdio.h>
#include <stdlib.h>

#define MAX 60

void aff_tab(char tab[][MAX], int i, int j) { printf("%d", tab[i][j]); }

int main() {
  char tab[MAX][MAX];
  int i, j;
  for (j = 0; j < MAX; j++) {
    for (i = 0; i < MAX; i++) {
      tab[i][j] = 0;
      aff_tab(tab, i, j);
    }
  }
  return 0;
}
