/*
Deplacement.c
---------------------

By Michael Scherer

Rôle : contient les fonctions de deplacement des joueurs.
Dernère date de modification : 06/12/2011.
*/
#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int move(Joueur joueur, char Rep[]) {
  int i;
  switch (Rep[0]) {
  case 72:
    for (i = 0; i < Rep[1]; i++)
      joueur.y++;
    break;
  case 66:
    for (i = 0; i < Rep[1]; i++)
      joueur.y--;
    break;
  case 71:
    for (i = 0; i < Rep[1]; i++)
      joueur.x--;
    break;
  case 68:
    for (i = 0; i < Rep[1]; i++)
      joueur.x++;
    break;
  }

  return 0;
}
