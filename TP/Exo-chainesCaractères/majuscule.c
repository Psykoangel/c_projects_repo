#include <stdio.h>

void majuscule(char *chaine) {
  int i;
  for (i = 0; chaine[i] != '\0'; i++)
    ;
  {
    if (chaine[i] >= 'a' && chaine[i] <= 'z')
      chaine[i] -= 'a' - 'A';
  }
}

int main() {
  char chaine[200];

  scanf("%s", &chaine);
  majuscule(&chaine);

  printf("longueur : %s\n", chaine);

  return 0;
}
