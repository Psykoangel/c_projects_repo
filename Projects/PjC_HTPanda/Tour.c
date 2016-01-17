/*
Tour.c
---------------------

By Michael Scherer

Rôle : regroupe les fonctions du déroulement du jeu;.
Dernère date de modification : 06/12/2011.
*/

#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "Tour.h"
#include "Deplacement.h"

int tour(Joueur joueur1, Joueur joueur2) {
  int victoire = 0;
  char Rep[5] = {0};

  while (!(victoire)) {
    // affichage du Labyrinthe ici<
    printf("Tour de %s\n", joueur1.name);
    Turn_J(joueur1, Rep);
    // affichage du Labyrinthe ici<
    printf("Tour de %s\n", joueur2.name);
    Turn_J(joueur2, Rep);
    if (joueur1.e == 1 || joueur2.e == 1)
      victoire = 1;
  }
  return 0;
}

int Turn_J(Joueur joueur, char Rep[]) {
  printf("Votre choix de deplacement, suivis du nombre de case (ex : D3)\n");
  saisie(Rep);
  move(joueur, Rep);

  return 0;
}

/*
void Turn_P()
{

}
*/

int cloak(Joueur joueur) {
  char c = 0;
  if (joueur.nbCape > 0) {
    printf("Utiliser une cape ?");
    scanf("%c", &c);
    while (c != 'o' || c != 'n') {
      switch (c) {
      case 'o':
        joueur.cape = CAPEMISE;
        break;
      case 'n':
        break;
      default:
        printf("Nous avons mal compris votre choix...");
        scanf("%c", &c);
      }
    }
  }
}
/*
int flask(Joueur joueur)
{
    if()
}
*/
