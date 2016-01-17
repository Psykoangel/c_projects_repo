/***********************************************************/
/* Programme Celsius2Fahrenheit.c                          */
/*---------------------------------------------------------*/
/* Exercice de la partie 2 du module 2                     */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

float CelsiusVersFahrenheit(float Tc) { return Tc * 9 / 5 + 32; }

int main(int argc, char *argv[]) {

  float Tc = 0;
  float Tf = 0;

  /**********************************************************/
  /* Les deux lignes ci-dessous, on est ajoutee par rapport */
  /* a la version precedente afin de saisir une temperature */
  /* en degres Celcius en vue d'obtenir un equivalent en    */
  /* degres Fahrenheit                                      */
  /**********************************************************/

  printf("Temp. en degres celcius : ");
  scanf("%f", &Tc);

  Tf = CelsiusVersFahrenheit(Tc);

  printf("Tc = %5.2f\n", Tc);
  printf("Tf = %5.2f\n", Tf);

  system("PAUSE");

  return 0;
}
