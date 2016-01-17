#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double calculC(int i) {
  if (i == 1)
    return sqrt(2);

  return (sqrt(2 - 2 * sqrt(1 - pow(calculC(i - 1) / 2, 2))));
}

double calculpi(int i) { return pow(2, i) * calculC(i); }

int main() {
  int precision;
  int i = 2;
  double pi_precedent = calculpi(1), pi = calculpi(2);

  printf("Nombre de chiffres apres la virgule :");
  scanf("%d", &precision);

  while (1) {
    double difference = pi - pi_precedent;

    if (difference < pow(10, -precision))
      break;
    pi_precedent = pi;
    pi = calculpi(++i);
  }

  printf("PI a %d pres, en %d etapes : %.*lf\n", precision, i, precision, pi);

  return 0;
}
