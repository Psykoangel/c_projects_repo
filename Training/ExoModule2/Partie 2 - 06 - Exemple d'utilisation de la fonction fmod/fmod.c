/***********************************************************/
/* Programme fmod.c                                        */
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

  double valeur1 = -10.456;
  double valeur2 = 3;

  double calcul1 = fmod(valeur1, valeur2);
  double calcul2 = (int)valeur1 % (int)valeur2;

  printf("fmod (%.2f, %.2f) = %.2f\n", valeur1, valeur2, calcul1);
  printf("%.2f %% %.2f       = %.2f\n", valeur1, valeur2, calcul2);

  /********************************************************************/
  /* Appel systeme qui est ajoute afin d'invoquer la commande "PAUSE" */
  /* de la fenetre DOS : cela permet de bloquer le fonctionnement du  */
  /* programme pour voir ce qu'il se passe                            */
  /********************************************************************/

  system("PAUSE");

  return 0;
}
