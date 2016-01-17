/***********************************************************/
/* Programme trigonometrie.c                               */
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

  double alpha = 0.5;

  double cosinus = cos(alpha);
  double sinus = sin(alpha);
  double tangente = tan(alpha);

  double valeur = 0.5;

  double angle1 = acos(valeur);
  double angle2 = asin(valeur);
  double angle3 = atan(valeur);

  printf("cos  (%.2f) = %.2f\n", alpha, cosinus);
  printf("sin  (%.2f) = %.2f\n", alpha, sinus);
  printf("tan  (%.2f) = %.2f\n", alpha, tangente);

  printf("acos (%.2f) = %.2f\n", valeur, angle1);
  printf("asin (%.2f) = %.2f\n", valeur, angle2);
  printf("atan (%.2f) = %.2f\n", valeur, angle3);

  /********************************************************************/
  /* Appel systeme qui est ajoute afin d'invoquer la commande "PAUSE" */
  /* de la fenetre DOS : cela permet de bloquer le fonctionnement du  */
  /* programme pour voir ce qu'il se passe                            */
  /********************************************************************/

  system("PAUSE");

  return 0;
}
