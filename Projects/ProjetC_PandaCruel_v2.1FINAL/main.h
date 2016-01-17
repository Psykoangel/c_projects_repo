/*
main.h
-------------

by Michael Scherer

rôle : contient les définitions de constante et de la structure Joueur.
Last update 06/12/2011.
*/
#ifndef DEF_CONSTANTE
#define DEF_CONSTANTE

#define TAB_MAX 51
// Définition de la taille de la chaine qui va lire la doc d'aide. 2 suffit.
#define TAILLE_CHAINE 2

enum Cape { PAS_CAPE = 0, CAPE_NMISE = 1, CAPEMISE = 2 };
enum Potion { PAS_POTION = 0, POTION = 1 };

typedef struct {
  int x, y, e, nbFiole, nbCape;
  enum Cape cape;
  enum Potion potion;
  char name[TAB_MAX];
  char ico;
} Joueur;

int Quitter();

#endif
