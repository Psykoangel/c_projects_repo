/*
saisie.c
---------------------

By Michael Scherer

Rôle : permet la saisie d'information par l'utilisateur.
Dernère date de modification : 06/12/2011.
*/

#include <stdio.h>
#include <stdlib.h>

void saisie(char Rep[]) {

  scanf("\n%c%c", &Rep[0], &Rep[1]);

  while ((!((((Rep[0] == 'H') || (Rep[0] == 'B')) ||
             ((Rep[0] == 'G') || (Rep[0] == 'D'))) ||
            ((Rep[0] == 'C') || (Rep[0] == 'P')))) ||
         ((Rep[1] > 57) || (Rep[1] < 48))) {
    if (Rep[1] >= 58 || Rep[1] <= 48)
      Rep[1] = NULL;

    printf("Mauvaise selection.\nVeuillez taper une lettre en Majuscule, "
           "suivies d'un chiffre\ndans le cas d'un deplacement\n");
    scanf("\n%c%c", &Rep[0], &Rep[1]);
  }

  printf("\n\n%c %d\n\n", Rep[0], Rep[1]);
}
