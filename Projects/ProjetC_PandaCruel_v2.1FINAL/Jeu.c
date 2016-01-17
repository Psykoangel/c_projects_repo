/*
Jeu.c
-------------

by Michael SCHERER

rôle : Fonction contenant le deroulement du jeu.
Last update 06/12/2011.
*/

#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "Jeu.h"

int jeu(char tab[TAB_MAX][TAB_MAX], Joueur *joueur1, Joueur *joueur2,
        Joueur *ePanda) {
  int nbPartie = 0, victoire = 0;

  affichage(tab);

  victoire = tour(tab, joueur1, joueur2, ePanda);

  if (joueur1->e == 1) {
    Victory(nbPartie, joueur1);
  } else if (joueur2->e == 1) {
    Victory(nbPartie, joueur2);
  }

  return EXIT_SUCCESS;
}

int Victory(int nb_parties, Joueur *joueur) {
  system("cls");
  // Si un des joueurs a gagné, on affiche ensuite son nom.
  printf("                \n");
  printf("                \n");
  printf("                \n");
  printf("  VICTOIRE  !!! \n");
  printf("                \n");
  printf("                \n");
  printf("         \\    /  \n");
  printf("          \\%c/   \n", joueur->ico);
  printf("           |    \n");
  printf("           |    \n");
  printf("          / \\   \n");
  printf("         |   |   \n");
  printf("\n\n      Et le grand vainqueur est...\n");
  printf("          %s ! Gg !!\n\n", joueur->name);
  system("PAUSE");
  nb_parties++;

  return nb_parties;
}
