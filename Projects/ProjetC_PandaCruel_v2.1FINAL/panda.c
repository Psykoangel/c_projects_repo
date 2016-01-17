/*
By Michael SCHERER
Begin 5/12/2011
Last update 6/12/2011
Code a choisir les caracteristiques du Panda Cruel.
*/
// Inclusion des bibliotheques
#include <stdlib.h>
#include <stdio.h>

// On inclut les fichiers externes contentant les fonctions necessaires
#include "menu.h"
#include "main.h"

int panda(Joueur *joueur1, Joueur *joueur2, Joueur *ePanda) {
  // Avant de demarrer le jeu, on choisit le nom des joueurs

  nomJoueur(joueur1, joueur2); // Appel de la fonction d'entree de nom de joueur

  if (ePanda->e == 0) {
    ePanda->x = 24;
    ePanda->y = 20; // Parametres pour un panda statique
  }

  else if (ePanda->e == 1) {
    ePanda->x = 24;
    ePanda->y = 20; // Parametres pour un panda mobile
  }

  return 0;
}
