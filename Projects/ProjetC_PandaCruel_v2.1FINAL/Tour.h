/*
Tour.h
---------------------

By Michael Scherer

Rôle : contient les headers de Tour.c.
Last update 06/12/2011.
*/

#ifndef DEF_TOUR
#define DEF_TOUR

#include "main.h"

int tour(char tab[TAB_MAX][TAB_MAX], Joueur *joueur1, Joueur *joueur2,
         Joueur *ePanda);
int Turn_J(char tab[TAB_MAX][TAB_MAX], Joueur *joueur, char Rep[]);
void Saisie(char Rep[]);
int Panda(char tab[TAB_MAX][TAB_MAX], Joueur *ePanda);
void verifications(Joueur *joueur, char direction, int nb_case,
                   char tab[TAB_MAX][TAB_MAX]);

#endif
