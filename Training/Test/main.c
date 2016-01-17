#include <stdio.h>
#include <stdlib.h>

// Premiere maniere
int compteur1() {
  static int i;
  i = 0;

  i = i + 1;
  return i;
}

// Deuxieme maniere
int compteur2() {
  static int i = 0;

  i = i + 1;
  return i;
}

// Programme permettant de tester les deux versions du compteur
void main() {

  printf("Compteur No 1 : %d\n", compteur1());
  printf("Compteur No 1 : %d\n", compteur1());
  printf("Compteur No 1 : %d\n", compteur1());
  printf("Compteur No 1 : %d\n", compteur1());

  printf("Compteur No 2 : %d\n", compteur2());
  printf("Compteur No 2 : %d\n", compteur2());
  printf("Compteur No 2 : %d\n", compteur2());
  printf("Compteur No 2 : %d\n", compteur2());
}
