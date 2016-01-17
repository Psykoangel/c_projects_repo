#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int tableau[] = {1, 2, 3, 42, -5, 0, 9, -8, 7, 6};
  int compteur_affichage; // compteur pour l'affichage du tableau
  int j = 1, i = 1;       // compteur pour le parcours du tableau et les boucles
  int indice = 0;         // indice du tableau ou est la plus petit
  int temp;               // utiliser pour le stockage pendant la reaffectation

  for (i = 1; i < 11; i++) {
    indice = i - 1;
    for (j = 1; j < 11 - i; j++) {

      if (tableau[indice] > tableau[i - 1 + j]) {
        indice = i - 1 + j;
      }
    }

    temp = tableau[i - 1];
    tableau[i - 1] = tableau[indice];
    tableau[indice] = temp;
  }

  printf("| ");

  for (compteur_affichage = 0; compteur_affichage < 10; compteur_affichage++) {
    printf("%d | ", tableau[compteur_affichage]);
  }

  // affichage du tableau final
  return 0;
}
