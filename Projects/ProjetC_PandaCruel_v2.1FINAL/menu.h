/*
By Michael SCHERER
Begin 6/12/2011
Last update 6/12/2011
contient les headers de menu.c
*/
#ifndef DEF_MENU
#define DEF_MENU

#include "main.h"

int afficheMenu(char tab[TAB_MAX][TAB_MAX], Joueur *, Joueur *, Joueur *);
int panda(Joueur *, Joueur *, Joueur *);
double aide(double);
void Sleep(int);
void nomJoueur(Joueur *, Joueur *);
void intro();
int continu(char tab[TAB_MAX][TAB_MAX], Joueur *joueur1, Joueur *joueur2);

#endif
