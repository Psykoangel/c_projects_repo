/*
Par Michael.Scherer
Begin 5/12/2011
Last update 7/12/2011
Code afficher l'introduction du jeu.
*/
#include <stdlib.h>
#include <stdio.h>

#include "menu.h"
#include "main.h"

void Sleep(int nb) {
  int i = 0;
  while (i < nb * 1000000) {
    i++;
  }
}

void nomJoueur(Joueur *joueur1,
               Joueur *joueur2) // Fonction renvoyant le nom des joueurs
{
  printf("Entrez le nom du joueur 1\n");
  scanf("%s", &joueur1->name);
  printf("Entrez le nom du joueur 2\n");
  scanf("%s", &joueur2->name);
  printf("Ainsi, %s affrontera %s !!\n", joueur1->name, joueur2->name);
  Sleep(500); // Le message restera a l'ecran pendant 2500 ms, soit 2,5 sec
}

void intro() {
  printf("\n\n");
  printf("___________$$_$$__$$_$$_$ \n");
  printf("__________$$_$$_$$_$$_$$$ \n");
  printf("______$$$$$____________$$$$$$$ \n");
  printf("____$$$$$_______________$$$$$$$ \n");
  printf("___$$$$$__________________$$$$$$ \n");
  printf("___$$$$____________________$$$$ \n");
  printf("____$$______________________$$$ \n");
  printf("____$________________________$$$$ \n");
  printf("___$$_____$$$______$$________$$$$$$$ \n");
  printf("___$_____$$$$_____$$$$$______$$$$$$_$ \n");
  printf("___$____$$$$$____$$$$$$$$____$$$$$$__$ \n");
  printf("___$$__$$$$$______$$$$$$$___$$$$$$$___$ \n");
  printf("____$__$$$__________$$$$___$$$$$$$$$___$ \n");
  printf("____$$____________________$$$$$$$$$$___$$$ \n");
  printf("____$$$_____$$$$$$_______$$$$$$$$$$$___$$$$ \n");
  printf("____$$$$$___$$$$$$_____$$$$$$$$$$$$$__$$$$$$ \n");
  printf("____$$$$$$$_________$$$$$$$$$$$$$$$__$$$$$$$$ \n");
  printf("____$$$$$$$$__$$$___$$$$$$$$$$$$$$$_$$$$$$$$$ \n");
  printf("_____$$$$$$$$$$$$__$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
  printf("_____$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ $$$$$$$$$$ \n");
  printf("_____$$$$$$$$$_$$$$$$$_$$$$$$$$$$$ $$$$$$$$ \n");
  printf("___$$$$$$$$$$$_________$$$$$$$$$$$ $$$$$ \n");
  printf("___$$$$$$$$$$_________$$$$$$$$$$$ \n");
  printf("____$$$$$$$_________$$$$$$$$$$$$ \n");
  printf("____________________$$$$$$$$$$$ \n");
  printf("\n\n");
  printf(",---.|              |        | \n");
  printf("`---.|--- ,---.,---.|---     | \n");
  printf("    ||    ,---||    |          \n");
  printf("`---'`---'`---^`    `---'    o \n");

  Sleep(500); // L'intro restera a l'ecran pendant 5000 ms, soit 5 sec
  // Jeu() // Et le jeu se lancera enfin \o/
}
