#include <math.h>
#include <stdlib.h>

// Fonction qui retourne la premiere valeur dont le carre est superieur a un
// nombre donne
double encadrement(int nombre_donne) {
  int i;

  for (i = 0; (i * i) <= nombre_donne; i++)
    printf("i=%d ", i);

  return (double)i;
}

// Fonction qui renvoie la racine carree de x
double racine_carree(int x, double precision) {

  double racine;
  double binf, bsup;

  printf("x=%d \n", x);

  bsup = (double)encadrement(x);
  printf("bsup=%d \n", bsup);

  binf = bsup - 1;
  racine = (bsup - binf) / 2;

  while ((bsup - binf) > precision) {
    if ((racine * racine) > x)
      bsup = (bsup - binf) / 2;

    else
      binf = (bsup - binf) / 2;
    racine = pow((bsup - binf), 2) / 2;
  }

  return (racine);
}

int main() {
  int nb;
  // int valeur_sup;

  printf("Entrez le nombre dont vous voulez la racine : ");
  scanf("%d", &nb);
  // valeur_sup = encadrement(nb);
  // printf("%d < %d < %d \n", (valeur_sup-1), racine_carree(nb, 0.001),
  // valeur_sup);
  printf("%d", racine_carree(nb, 0.001));

  system("PAUSE");

  return 0;
}
