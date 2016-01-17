#include <stdio.h>
#include <stdlib.h>

#define TAILLE_TABLEAU 100
#define MIN_VALEUR 100
#define MAX_VALEUR 1000

int main() {
  int i, j, tmp;

  /* initialisation du générateur de nombres aléatoire */
  srand(time(NULL));

  /* génération du tableau */
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

  /* résultat */
  for (i = 0; i < TAILLE_TABLEAU; i++)
    printf("%d ", T[i]);

  printf("\n");

  return 0;
}
