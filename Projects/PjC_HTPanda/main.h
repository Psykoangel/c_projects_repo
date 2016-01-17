/*
main.h
-------------

by Michael Scherer

rôle : contient les définitions de constante et de la structure Joueur.
date de modification :05/12/2011.
*/
#ifndef DEF_CONSTANTE
#define DEF_CONSTANTE

#define TAB_MAX 51

enum Cape { PAS_CAPE = 0, CAPE_NMISE = 1, CAPEMISE = 2 };
enum Potion { PAS_POTION = 0, POTION = 1 };

typedef struct Joueur Joueur;
struct Joueur {
  int x, y, e, nbFiole, nbCape;
  enum Cape cape;
  enum Potion potion;
  char name[TAB_MAX];
};

#endif
