/***********************************************************/
/* Programme polaire.c                                     */
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

  double abscisse = 10;
  double ordonnee = 20;

  double theta = atan2(abscisse, ordonnee);

  printf("La polaire de P (%.2f ; %.2f) est egale a %.2f\n", abscisse, ordonnee,
         theta);

  /********************************************************************/
  /* Appel systeme qui est ajoute afin d'invoquer la commande "PAUSE" */
  /* de la fenetre DOS : cela permet de bloquer le fonctionnement du  */
  /* programme pour voir ce qu'il se passe                            */
  /********************************************************************/

  system("PAUSE");

  return 0;
}
