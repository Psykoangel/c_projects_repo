#include <stdio.h>
#include <stdlib.h>

static int decimal(char *str, double *nb) {
  int pt = 0;
  int i = 0;

  while (str[i] >= '0' && str[i] <= '9') {
    *nb = *nb * 10.0 + (double)(str[i] - 48);
    pt = pt - 1;
    i++;
  }

  return pt;
}

double my_atof(char *str) {

  double nb = 0.0;
  int minus = 0;
  int pt = 0;

  while (*str == '-' || *str == '+')
    minus += ((*str++ == '-') ? 1 : 0);

  while (*str >= '0' && *str <= '9')
    nb = nb * 10.0 + (double)(*str++ - 48);

  if (*str++ == '.')
    pt = decimal(str, &nb);

  while (pt < 0) {
    nb *= 0.1;
    pt++;
  }

  if (minus % 2 == 0)
    return (nb);
  else
    return (-nb);
}

int main() {

  int T[200] = {};
  int i = 1, j = 1; // variables de parcours de tableau
  char *n;          // cense etre egal a 200
  int indice = 0;   // contient l'indice de la case contenant la valeur la plus
                    // petite
  int tmp = 0;      // temporaire
  double x = 0;

  n = malloc(sizeof(*n) + 1024);

  printf("Saisiez la taille du tableau : \n");
  // scanf("%d",&n);
  scanf("%80s", &n);

  printf("la valeur de n est de : %d\n", n);

  x = my_atof(n);

  printf("la valeur de x est de : %d\n", x);

  while (i < x) {
    indice = (i - 1);

    while (j < x - (i - 1)) {
      if (T[indice] > T[i - 1 + j]) {
        indice = i - 1 + j;
      }
    }
  }

  tmp = T[i - 1];
  T[i - 1] = T[indice];
  T[indice] = tmp;

  printf("%d", T[i]);

  system("pause");

  free(n);

  return 0;
}
