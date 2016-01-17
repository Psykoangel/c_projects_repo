#include <stdio.h>
#include <stdlib.h>

int longueur(char chaine[]) {
  int i = 0;

  while (chaine[i] != '\0') {
    i++;
  }

  return i;
}

void Majuscule(char chaine[]) {

  int i = 0;

  while (chaine[i] != '\0') {
    if (chaine[i] >= 'a' && chaine[i] <= 'z') {
      chaine[i] = chaine[i] - ('a' - 'A');
    }

    i++;
  }
}

void Minuscule(char chaine[]) {

  int i = 0;

  while (chaine[i] != '\0') {
    if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
      chaine[i] = chaine[i] + ('a' - 'A');
    }

    i++;
  }
}

void inverse(char chaine[]) {

  int j = longueur(chaine) - 1;
  int i = 0;
  char tmp;

  while (i <= j) {
    tmp = chaine[i];
    chaine[i++] = chaine[j];
    chaine[j--] = tmp;
  }
}

void copier(char source[], char destination[]) {

  int i = -1;

  do {
    i++;
    destination[i] = source[i];
  } while (source[i] != '\0');
}

void main() {

  char chaine[50];
  char chaine2[50];

  scanf("%s", chaine);

  int longue = longueur(chaine);
  printf("%s\n\n", chaine);

  inverse(chaine);
  printf("%s\n\n", chaine);
  inverse(chaine);

  copier(chaine, chaine2);

  printf("longueur = %d\n\n", longue);

  Majuscule(chaine);
  printf("%s\n\n", chaine);

  Minuscule(chaine);
  printf("%s\n\n", chaine);

  printf("%s\n\n", chaine2);

  system("PAUSE");
}
