/*
Jeu.h
-------------

by Michael SCHERER

rôle : Contient les headers de jeu.c.
Last update 06/12/2011.
*/

#ifndef DEF_JEU
#define DEF_JEU

#include "main.h"

int jeu(char tab[TAB_MAX][TAB_MAX], Joueur *joueur1, Joueur *joueur2,
        Joueur *ePanda);
void affiche(char tab[TAB_MAX][TAB_MAX], int i, int j);
void affichage();
int Victory(int, Joueur *);
int randpanda_dir(void);
int randpanda_case(void);
int Panda(char tab[TAB_MAX][TAB_MAX], Joueur ePanda);

#endif
