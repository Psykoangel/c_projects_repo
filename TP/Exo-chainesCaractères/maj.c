#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void majuscule(char chaine[]) {
  int i;

  for (i = 0; chaine[i] != '\0'; i++) {
    if (chaine[i] >= 'a' && chaine[i] <= 'z')
      chaine[i] -= 'a' - 'A';
  }
}

int main() {
  char unechaine[200];

  printf("Entrez une chaine de caractere :");
  scanf("%s", &unechaine);

  majuscule(unechaine);
  printf("chaine de caractere en maj: %s\n", unechaine);

  return 0;
}
