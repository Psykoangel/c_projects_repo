/***********************************************************/
/* Programme racineCarree.c                                */
/*---------------------------------------------------------*/
/* Exemple de la partie 1 du module 2                      */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

/***********************************************************/
/* La fonction racineCarree prend comme parametre un float */
/* et elle retourne un float.                              */
/*                                                         */
/* Les variables parametre et racine sont des variables    */
/* locales a cette fonction                                */
/***********************************************************/

float racineCarree(float parametre) {
  /****************************************************/
  /* On cree une variable locale qu'on initialise a 0 */
  /****************************************************/

  float racine = 0;

  /********************************************************/
  /* On utilise les variables locales racine et parametre */
  /* dans la boucle while                                 */
  /********************************************************/

  while (racine * racine < parametre)
    racine += .01;

  /*********************************************************/
  /* On retourne la valeur de la variable locale racine en */
  /* sortie de la fonction racineCarree                    */
  /*********************************************************/

  return racine;
}

/**************************************************************/
/* Le main est la premi�re fonction qui est appelee lorsqu'on */
/* execute le programme                                       */
/**************************************************************/

int main(int argc, char *argv[]) {
  /**********************************************************/
  /* Creation des deux variables locales a la fonction main */
  /**********************************************************/

  float racineCalculee = 0;
  float nombre = 10;

  /*****************************************************************/
  /* APPEL de la fonction racineCarree                             */
  /*                                                               */
  /*   -> on n'ecrit pas les types des parametres et le type de    */
  /*       retour lors de l'appel de la fonction                   */
  /*                                                               */
  /*   -> la valeur de nombre est recopi�e dans la variable        */
  /*       parametre, qui est locale a racineCarree                */
  /*                                                               */
  /*   -> la valeur de racine (la variable locale de racineCarree) */
  /*       est recopi�e dans la variable racineCalculee lorsque la */
  /*       fonction se termine (execution du return)               */
  /*****************************************************************/

  racineCalculee = racineCarree(nombre);

  /****************************************************************/
  /* Affichage des valeurs des variables nombre et racineCalculee */
  /* a la place des deux "%f"                                     */
  /****************************************************************/

  printf("sqrt (%f) = %f\n", nombre, racineCalculee);

  /********************************************************************/
  /* Appel systeme qui est ajoute afin d'invoquer la commande "PAUSE" */
  /* de la fenetre DOS : cela permet de bloquer le fonctionnement du  */
  /* programme pour voir ce qu'il se passe                            */
  /********************************************************************/

  system("PAUSE");

  return 0;
}
