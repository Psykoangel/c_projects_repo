#include <stdio.h>
#include <stdlib.h>

int Divquot(int x, int y, int *reste) {
  *reste = x % y;
  return (x / y);
}

int main(void) {

  int Nombre1, Nombre2, ResultatDiv, reste = 0;

  printf("Donnez une valeur pour nombre1 : ");
  scanf("%d", &Nombre1);
  printf("Donnez une valeur pour nombre2 : ");
  scanf("%d", &Nombre2);

  ResultatDiv = Divquot(Nombre1, Nombre2, &reste);

  printf("Le resultat est : %d\n", ResultatDiv);
  printf("Le reste est : %d\n", reste);
}
