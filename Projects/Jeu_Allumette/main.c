#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "prototype.h"

const int MIN = 10, MAX = 50;

// fonction principale
int main() {

  int nbAll = random(MIN, MAX);
  int nbTour = 0, NmjrG = 0, J1Chx = 0, J2Chx = 0;
  int AllD = nbAll;

  while (nbAll > 1) {
    tour(&nbAll, &J1Chx, &J2Chx);
    nbTour += 1;
  }

  printf("Le joueur %d a gagne !!", NmjrG);
  printf("Le jeu comptaient %d allumettes et s'est deroule en %d tours", AllD,
         nbTour);

  return 0;
}

int random(int MIN, int MAX) // choisi un nombre entre MIN et MAX;
{
  int nb = 0;
  srand(time(NULL));
  nb = (rand() % (MAX - MIN + 1)) + MIN;
  return nb;
}

// execution du tour de jeu : choix des joueurs, calculs des All restantes,
void tour(int *ptrnbAll, int *ptrJ1, int *ptrJ2) {

  printf("Joueur 1 :");
  scanf("%d", ptrJ1);

  while (test(*ptrJ1)) {
    printf("Saisie incorrect !\nVeuillez saisir un chiffre entre 1 et 3...\n");
    scanf("%d", ptrJ1);
  }

  exit(*ptrJ1);

  *ptrnbAll -= *ptrJ1;

  printf("Joueur 2 :");
  scanf("%d", ptrJ2);

  while (test(*ptrJ2)) {
    printf("Saisie incorrect !\nVeuillez saisir un chiffre entre 1 et 3...\n");
    scanf("%d", ptrJ2);
  }

  exit(*ptrJ2);

  *ptrnbAll -= *ptrJ2;
}

// va tester si les valeurs entree sont valables;
int test(int var) {

  if ((var > 4) && (var < 0))
    return 1;
  else
    return 0;
}

// fonction permettant d'abandonner ou de quitter le jeu;
void exit(int **var) {

  if (*var == 0)
    break;
}
