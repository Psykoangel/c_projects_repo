#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int, int, int);

const int MIN = 0, MAX = 100;

int main() {
  int nbMyst = 0, nbChx = 0;

  nbMyst = random(nbMyst, MIN, MAX);
  do {
    printf("Entrer un chiffre :\n");
    scanf("%d", &nbChx);

    if (nbChx > nbMyst)
      printf("C'est plus petit !!\n\n");
    else if (nbChx < nbMyst)
      printf("C'est plus grand !!\n\n");
    else
      printf("C'est bien vous avez trouve le nombre Mystere !!!\n");
  } while (nbChx != nbMyst);

  return 0;
}

int random(int nb, int MIN, int MAX) {
  srand(time(NULL));
  nb = (rand() % (MAX - MIN + 1)) + MIN;
  return nb;
}
