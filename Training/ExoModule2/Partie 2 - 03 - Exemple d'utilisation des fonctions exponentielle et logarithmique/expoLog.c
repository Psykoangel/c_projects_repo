/***********************************************************/
/* Programme expoLog.c                                     */
/*---------------------------------------------------------*/
/* Exemple de la partie 2 du module 2                      */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

/*********************************************************/
/* On ajoute cette ligne afin d'avoir acces au prototype */
/* des fonctions mathematiques.                          */
/*********************************************************/

#include <math.h>

int main(int argc, char *argv[]) {

  double valeur = 2;

  double calcul1 = exp(valeur);   /* La fonction exponentielle */
  double calcul2 = log(valeur);   /* La fonction logarithme neperien */
  double calcul3 = log10(valeur); /* La fonction logarithme decimal */

  printf("exp   (%.2f) = %.2f\n", valeur, calcul1);
  printf("log   (%.2f) = %.2f\n", valeur, calcul2);
  printf("log10 (%.2f) = %.2f\n", valeur, calcul3);

  /********************************************************************/
  /* Appel systeme qui est ajoute afin d'invoquer la commande "PAUSE" */
  /* de la fenetre DOS : cela permet de bloquer le fonctionnement du  */
  /* programme pour voir ce qu'il se passe                            */
  /********************************************************************/

  system("PAUSE");

  return 0;
}
