#include <stdio.h>
#include <stdlib.h>

#define TAILLE_TABLEAU 100
#define MIN_VALEUR 100
#define MAX_VALEUR 1000

int main() {

  int i;
  int j;
  int tmp;

  /* initialisation du generateur de nombres aleatoire */
  srand(time(NULL));

  /* generation du tableau */
  int T[TAILLE_TABLEAU];

  for (i = 0; i < TAILLE_TABLEAU; i++) {
    T[i] = MIN_VALEUR + rand() % (MAX_VALEUR - MIN_VALEUR);
    printf("%d ", T[i]);
  }

  printf("\n(tri...)\n");

  /* algo */
  for (i = 1; i < TAILLE_TABLEAU; i++) {
    j = 0;

    while ((j <= (i - 1)) && (T[i - j] < T[i - j - 1])) {
      tmp = T[i - j];
      T[i - j] = T[i - j - 1];
      T[i - j - 1] = tmp;
      j++;
    }
  }

  /* resultat */
  for (i = 0; i < TAILLE_TABLEAU; i++)
    printf("%d ", T[i]);

  printf("\n");

  system("pause");

  return 0;
}
