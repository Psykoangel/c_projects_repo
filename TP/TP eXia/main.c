#include <stdio.h>
#include <stdlib.h>

#define TAB_MAX 50

int main() {
  // -- Declaration de variables --
  FILE *Fichier = NULL, *Fichier2 = NULL;
  char string[] = "intouchables.txt", string2[] = "bad_guys.txt";
  char nom[TAB_MAX] = {0}, prenom[TAB_MAX] = {0}, centre[TAB_MAX] = {0};

  Fichier = fopen("intouchables.txt", "r"); // -- Ouverture de fichier --
  Fichier2 = fopen("bad_guys.txt", "r+");
  if ((!Fichier) || (!Fichier2)) {
    printf("ERROR::No such file found : %s or %s", string, string2);
  }

  fclose(Fichier);
  fclose(Fichier2);
  return 0;
}
