/*
main.c
-------------

by Michael Scherer

rôle : contient tout le deroulement du programme.
Last update 06/12/2011.
*/

#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "main.h"
#include "Jeu.h"

int main() {

  int nb = 0, continuer = 0;
  char tab[TAB_MAX][TAB_MAX] = {0};
  Joueur joueur1 = {0};
  Joueur joueur2 = {0};
  Joueur ePanda = {0};

  joueur1.x = 2;
  joueur1.y = 1;
  joueur2.x = 47;
  joueur2.y = 48;
  joueur1.ico = 257;
  joueur2.ico = 258;
  ePanda.ico = 153;

  do {
    nb = afficheMenu(tab, &joueur1, &joueur2,
                     &ePanda); // Appel de la fonction d'affichage du menu

    intro(); // Affichage de l'intro
    // system("PAUSE");
    system("cls");
    jeu(tab, &joueur1, &joueur2, &ePanda);
  } while (Quitter() != 1);

  return EXIT_SUCCESS;
}
