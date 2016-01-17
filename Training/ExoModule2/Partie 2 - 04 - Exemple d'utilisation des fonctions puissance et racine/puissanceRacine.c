/***********************************************************/
/* Programme puissanceRacine.c                             */
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

  double valeur1 = 10;
  double valeur2 = 0.5;

  double calcul1 =
      pow(valeur1, valeur2);      /* Le calcul de 10 a la puisance 0.5 */
  double calcul2 = sqrt(valeur1); /* La racine carre de 10 */

  printf("%.2f puissance %.2f est egal a %.2f\n", valeur1, valeur2, calcul1);
  printf("La racine carre de %.2f est egal a %.2f\n", valeur1, calcul2);

  /********************************************************************/
  /* Appel systeme qui est ajoute afin d'invoquer la commande "PAUSE" */
  /* de la fenetre DOS : cela permet de bloquer le fonctionnement du  */
  /* programme pour voir ce qu'il se passe                            */
  /********************************************************************/

  system("PAUSE");

  return 0;
}
