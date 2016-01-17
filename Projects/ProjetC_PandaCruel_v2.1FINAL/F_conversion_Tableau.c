/*
F_conversion_Tableau.c
-------------

by Michael SCHERER

role : Fonction tableau qui remplace les lettres dans le .txt par les bons
caracteres.
Last update 06/12/2011.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "main.h"

void affiche(char tab[TAB_MAX][TAB_MAX], int i, int j) {
  printf("%c", tab[i][j]);
}

void affichage(char tab[TAB_MAX][TAB_MAX]) {
  int i = 0, j = 0;
  char a;
  FILE *fichier = NULL;

  fichier = fopen("testlaby.txt", "r");

  for (j = 0; j < TAB_MAX; j++) {
    for (i = 0; i < TAB_MAX; i++) {
      a = fgetc(fichier);

      switch (a) {
      case 77:
        a = 219;
        break;

      case 65:
        a = 257;
        break;

      case 66:
        a = 258;
        break;

      case 67:
        a = 287;
        break;

      case 70:
        a = 173;
        break;

      case 80:
        a = 148;
        break;

      default:
        break;
      }
      tab[i][j] = a;
      affiche(tab, i, j);
    }
  }
}
