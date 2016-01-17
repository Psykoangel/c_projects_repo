#include <stdio.h>
#include <stdlib.h>

int somme(int a, int b) { return a + b; }

int soustraction(int a, int b) { return a - b; }

long factoriel(long a) {
  long i, resultat = 1;
  for (i = 1; i <= a; i++) {
    resultat *= i;
  }
  return resultat;
}

int main(void) {
  long A, B;

  printf("premiere valeur : ");
  scanf("%d", &A);

  printf("Deuxieme valeur : ");
  scanf("%d", &B);

  printf("Somme : %d\n", somme(A, B));
  printf("Sousctraction : %d\n", soustraction(A, B));
  printf("Factoriel : %d\n", factoriel(A));

  return 0;
}
