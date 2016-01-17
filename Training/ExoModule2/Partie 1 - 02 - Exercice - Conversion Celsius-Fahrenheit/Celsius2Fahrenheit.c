/***********************************************************/
/* Programme Celsius2Fahrenheit.c                          */
/*---------------------------------------------------------*/
/* Exercice de la partie 1 du module 2                     */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

float CelsiusVersFahrenheit(float Tc) {
  /*************************************/
  /* Creation d'une variable locale Tf */
  /*************************************/

  double Tf = Tc * 9 / 5 + 32;

  /**************************************************/
  /* On retourne la valeur de la variable locale Tf */
  /**************************************************/

  return Tf;
}

/********************************************************/
/* REMARQUE : On n'est pas oblige de creer une variable */
/*            locale, on peut retourner directement le  */
/*            resultat de l'operation. La fonction se   */
/*            simplifie.                                */
/*                                                      */
/*              float CelsiusVersFahrenheit (float Tc)  */
/*               {                                      */
/*                return Tc * 9 / 5 + 32;               */
/*               }                                      */
/********************************************************/

/**************************************************************/
/* Le main est la premiere fonction qui est appelee lorsqu'on */
/* execute le programme                                       */
/**************************************************************/

int main(int argc, char *argv[]) {
  float Tc = 21; /* On cree la variable locale Tc et on l'intialise de facon
                    arbitraire a 21 */
  float Tf = 0;  /* On cree la variable locale Tf et on l'initiale a 0 */

  /******************************************************************/
  /* APPEL de la fonction CelsiusVersFahrenheit                     */
  /*                                                                */
  /*  -> on n'ecrit pas le type du parametre et le type de retour   */
  /*                                                                */
  /*  -> la valeur de la variable Tc, locale a la fonction main est */
  /*     recopiee dans la variable Tc, le parametre de la fonction  */
  /*     qui est donc aussi une variable locale a cette fonction    */
  /*                                                                */
  /*        -> les deux variables portent le meme nom mais ce       */
  /*           sont des variables DISTINCTES qui ont des port�es    */
  /*           differentes.                                         */
  /*                                                                */
  /*  -> la valeur de la variable Tf, locale a la fonction          */
  /*     CelsiusVersFahrenheit est recopiee dans la variable Tf     */
  /*     qui est locale a la fonction main                          */
  /*                                                                */
  /*        -> la encore les deux variables Tf sont DISTINCTES      */
  /*           bien qu'elles portent le meme nom car elle n'ont     */
  /*           pas la meme portee                                   */
  /******************************************************************/

  Tf = CelsiusVersFahrenheit(Tc);

  /************************************************************/
  /* Affichage des valeurs des variables locale Tf et Tc      */
  /*                                                          */
  /*   -> les "%5.2f" sont remplaces de facon dynamique, lors */
  /*      du fonctionnement du programme par les valeurs de   */
  /*      ces variables avec deux chiffres apres la virgule   */
  /************************************************************/

  printf("Tc = %5.2f\n", Tc);
  printf("Tf = %5.2f\n", Tf);

  /********************************************************************/
  /* Appel systeme qui est ajoute afin d'invoquer la commande "PAUSE" */
  /* de la fenetre DOS : cela permet de bloquer le fonctionnement du  */
  /* programme pour voir ce qu'il se passe                            */
  /********************************************************************/

  system("PAUSE");

  return 0;
}
