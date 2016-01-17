#include <stdio.h>
#include <stdlib.h>

#include "main.h"

void affiche(char tab[TAB_MAX][TAB_MAX], int i, int j) {
  printf("%c", tab[i][j]);
}

void affichage() {
  char tab[TAB_MAX][TAB_MAX] = {0};
  int i, j;
  FILE *fichier = NULL;

  fichier = fopen("testlaby.txt", "r");

  for (j = 0; j < TAB_MAX; j++) {
    for (i = 0; i < TAB_MAX; i++) {
      tab[i][j] = fgetc(fichier);
      affiche(tab, i, j);
    }
  }
}
