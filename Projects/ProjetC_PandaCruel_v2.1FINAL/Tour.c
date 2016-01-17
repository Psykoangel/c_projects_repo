/*
Tour.c
---------------------

By Michael Scherer

Rôle : regroupe les fonctions du déroulement du jeu;.
Last update 09/12/2011.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "main.h"
#include "Tour.h"
#include "Deplacement.h"

int tour(char tab[TAB_MAX][TAB_MAX], Joueur *joueur1, Joueur *joueur2,
         Joueur *ePanda) {
  int victoire = 0;
  char Rep[5] = {0};

  while (!(victoire)) {
    printf("\n\nTour de %s\n", joueur1->name);
    Turn_J(tab, joueur1, Rep);
    if (joueur1->e == 1) {
      victoire = 1;
      return victoire;
    }
    printf("\n\nTour de %s\n", joueur2->name);
    Turn_J(tab, joueur2, Rep);
    if (joueur2->e == 1) {
      victoire = 1;
      return victoire;
    }

    if (ePanda->e == 1) {
      Panda(tab, ePanda);
    }
  }
  return EXIT_SUCCESS;
}

int Turn_J(char tab[TAB_MAX][TAB_MAX], Joueur *joueur, char Rep[]) {
  // printf("\n x : %d --- y : %d\n", joueur->x, joueur->y);
  int nbCase = 0;
  printf("Votre choix de deplacement, suivis du nombre de case (ex : D3)\n");
  Saisie(Rep);

  nbCase = Rep[1] - 48;

  verifications(joueur, Rep[0], nbCase, tab);

  return EXIT_SUCCESS;
}

int Panda(char tab[TAB_MAX][TAB_MAX], Joueur *ePanda) {
  int nbcase = 0;
  char direction = 0;

  nbcase = randpanda_case();
  direction = randpanda_dir();

  verifications(ePanda, direction, nbcase, tab);

  return EXIT_SUCCESS;
}

int randpanda_dir(void)

{
  int valeur_retournee = 0;
  char tableau[4] = {66, 68, 72, 71};
  while (valeur_retournee != 66 && valeur_retournee != 68 &&
         valeur_retournee != 72 && valeur_retournee != 71) {
    int i = 0, j = 0;
    int nombre_aleatoire = 0;

    srand(time(NULL)); // initialisation de rand
    nombre_aleatoire = rand();

    for (i = 0; i != nombre_aleatoire; i++) {
      j++;
      if (j > 4) {
        j = 0;
      }

      valeur_retournee = tableau[j];
    }
  }

  return valeur_retournee;
}

int randpanda_case(void)

{
  char tableau[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int valeur_retournee = 11;
  while (valeur_retournee > 9 || valeur_retournee < 1) {

    int i = 0, j = 0;
    int nombre_aleatoire = 0;

    srand(time(NULL)); // initialisation de rand
    nombre_aleatoire = rand();

    for (i = 0; i != nombre_aleatoire; i++) {
      j++;
      if (j > 10) {
        j = 0;
      }

      valeur_retournee = tableau[j];
    }
  }
  return valeur_retournee;
}
