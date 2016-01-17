/***********************************************************/
/* Programme absEtfabs.c                                   */
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

  double valeur = -10.45;

  double calcul1 = fabs(valeur); /* fabs retourne un double */
  double calcul2 = abs(valeur);  /*  abs retourne un int    */

  printf("fabs (%.2f) = %.2f\n", valeur, calcul1);
  printf(" abs (%.2f) = %.2f\n", valeur, calcul2);

  /********************************************************************/
  /* Appel systeme qui est ajoute afin d'invoquer la commande "PAUSE" */
  /* de la fenetre DOS : cela permet de bloquer le fonctionnement du  */
  /* programme pour voir ce qu'il se passe                            */
  /********************************************************************/

  system("PAUSE");

  return 0;
}
