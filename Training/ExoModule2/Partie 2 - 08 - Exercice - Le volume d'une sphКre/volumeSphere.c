/***********************************************************/
/* Programme volumeSphere.c                                */
/*---------------------------------------------------------*/
/* Exercice de la partie 2 du module 2                     */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

/************************************************/
/* On fait un #include <math.h> afin de pouvoir */
/* utiliser la constante symbolique M_PI et la  */
/* fonction pow                                 */
/************************************************/

#include <math.h>

float volumeDeLaSphere(float rayon) { return 4 * M_PI * pow(rayon, 2) / 3; }

int main(int argc, char *argv[]) {

  float rayon = 0;
  float volume = 0;

  printf("Rayon de la sphere : ");
  scanf("%f", &rayon);

  volume = volumeDeLaSphere(rayon);

  printf("rayon  = %5.2f\n", rayon);
  printf("volume = %5.2f\n", volume);

  system("PAUSE");

  return 0;
}
