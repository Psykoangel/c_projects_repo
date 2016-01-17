#include <stdio.h>
#include <stdlib.h>

main() {

  int tableau[] = {3, 6, 22, 457, 76, -41, 3, 61, -34, 78};
  int compt = 0;
  int memo;
  int echange = 1;
  int borne = 9, borne2 = 0;

  while (echange) {
    echange = 0;

    while (compt < borne) {
      if (tableau[compt] > tableau[compt + 1]) {
        // echange des cases
        memo = tableau[compt + 1];
        tableau[compt + 1] = tableau[compt];
        tableau[compt] = memo;
        echange = 1;
      }

      compt++;
    }

    borne--;

    while (compt > borne2) {
      if (tableau[compt - 1] > tableau[compt]) {
        // echange des cases
        memo = tableau[compt - 1];
        tableau[compt - 1] = tableau[compt];
        tableau[compt] = memo;
        echange = 1;
      }
      compt--;
    }
    borne2++;
  }

  // affichage des valeurs dans un tableau tri� dans l'ordre croissant
  printf("Tri dans l'ordre croissant :\n");
  for (compt = 0; compt <= 9; compt++) {
    printf("%ld\n", tableau[compt]);
  }

  // affichage des valeurs dans un tableau tri� dans l'ordre d�croissant
  printf("\nTri dans l'ordre decroissant :\n");
  for (compt = 9; compt >= 0; compt--) {
    printf("%ld\n", tableau[compt]);
  }

  system("PAUSE");

  return 0;
}
