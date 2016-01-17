#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"
//#include "aff_.h"
#include "Tour.h"

int main() {
  Joueur joueur1, joueur2;

  strcpy(joueur1.name, "elouan");
  strcpy(joueur2.name, "allan");

  joueur1.cape = PAS_CAPE;
  joueur2.cape = PAS_CAPE;
  joueur1.nbFiole = 0;
  joueur1.nbFiole = 0;
  joueur2.nbFiole = 0;
  joueur2.nbFiole = 0;
  joueur1.nbCape = 0;
  joueur1.nbCape = 0;
  joueur2.nbCape = 0;
  joueur2.nbCape = 0;
  joueur1.e = 0, joueur2.e = 0;
  joueur1.potion = PAS_POTION;
  joueur2.potion = PAS_POTION;

  printf("Joueur 1 : %s, Joueur 2 : %s\n", joueur1.name, joueur2.name);
  system("PAUSE");

  tour(joueur1, joueur2);

  return EXIT_SUCCESS;
}
