#include <stdio.h>
#include <stdlib.h>

// Fonction qui retourne l'encadrement du nombre donne.
int encadrement(int nombre_donne) {
  int i;

  for (i = 0; (i * i) < nombre_donne; i++)
    ;

  return i;
}

// Fonction racine carr�e
double racine_carree(int x, double precision) {

  double racine;
  double binf, bsup;

  bsup = encadrement(x);
  binf = bsup - 1;
  racine = (bsup + binf) / 2;

  while ((bsup - binf) > precision) {
    if ((racine * racine) > x)
      bsup = (bsup + binf) / 2;
    else
      binf = (bsup + binf) / 2;

    racine = (bsup + binf) / 2;
  }

  return (racine);
}

int main() {

  int nb;
  int precision;

  printf("Donner le nombre dont vous voulez la racine : ");

  scanf("%d", &nb);
  printf("Donner la precision : ");

  scanf("%d", &precision);

  printf("La racine du nombre %.*lf\n", precision,
         racine_carree(nb, pow(10, -precision)));

  system("PAUSE");

  return 0;
}
