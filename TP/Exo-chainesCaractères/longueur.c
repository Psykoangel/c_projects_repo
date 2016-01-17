#include <stdio.h>

int longueur(char *chaine) {
  int i;

  for (i = 0; chaine[i] != '\0'; i++)
    ;

  return i;
}

int main() {

  char chaine[200];
  scanf("%s", &chaine);

  printf("longueur : %d\n", longueur(&chaine));

  return 0;
}
