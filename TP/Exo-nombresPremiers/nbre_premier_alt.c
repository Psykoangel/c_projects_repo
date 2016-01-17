#include <stdio.h>
#include <stdlib.h>

int main() {

  long int compteur, N, val, total = 0;

  printf("Ce programme recherche tous les nombres premiers jusqu'a une valeur "
         "que vous determinez \n");
  printf("Donner un nombre limite pour votre recherche : ");
  scanf("%ld", &N);

  printf("Les nombres premier jusqu'a %ld sont : \n", N);

  for (compteur = 2; compteur < N; compteur++) {
    int estPremier = 1;

    for (val = 2; val < compteur / 2; val++) {
      if (compteur % val == 0) {
        estPremier = 0;
      }
    }

    if (estPremier == 1) {
      total++;
      printf("%ld, ", compteur);
    }
    // printf("%d, \n", compteur);
    // printf("Il y a %d nombres premiers", total);
  }

  printf("Il y a %ld nombres premiers", total);

  return 0;
}
