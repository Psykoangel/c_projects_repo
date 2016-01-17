/***********************************************************/
/* Programme printf.c                                      */
/*---------------------------------------------------------*/
/* Exemple de la partie 3 du module 2                      */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  long i;

  printf("1. Un affichage simple :\n");
  printf("------------------------\n\n");

  printf("Chaine a afficher\n");
  printf("Chaine a afficher -> attention au caracteres accentues\n");

  printf("\n\n");
  printf("2. Un affichage sur une ligne code avec deux printf :\n");
  printf("-----------------------------------------------------\n\n");

  printf("J'ecris ma chaine de caracteres en deux fois, ");
  printf("mais elle est affichee sur une seule ligne !!\n");

  printf("\n\n");
  printf("3. Utilisation de la tabulation (\\t) :\n");
  printf("--------------------------------------\n\n");

  printf("Chapitres\t\t\tDuree\n");
  printf("Presentation du langage\t\t40 min\n");
  printf("les donnees\t\t\t21 min\n");
  printf("Les operations de base\t\t24 min\n");
  printf("Les structures de controle\t20 min\n");

  printf("\n\n");
  printf("4. Utilisation du retour chariot (\\r) :\n");
  printf("---------------------------------------\n\n");

  printf("Etape 1 : Analyse du probleme           \r");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("Etape 2 : Ecriture du programme         \r");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("Etape 3 : Pretraitement (preprocessing) \r");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("Etape 4 : Compilation                   \r");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("Etape 5 : Edition de lien (linking)     \r");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("Etape 6 : Execution                     \r");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("FIN                                     \n");

  printf("\n\n");
  printf("5. La meme chose en remplacant le \\r par \\n :\n");
  printf("---------------------------------------------\n\n");

  printf("Etape 1 : Analyse du probleme           \n");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("Etape 2 : Ecriture du programme         \n");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("Etape 3 : Pretraitement (preprocessing) \n");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("Etape 4 : Compilation                   \n");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("Etape 5 : Edition de lien (linking)     \n");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("Etape 6 : Execution                     \n");
  for (i = 0; i < 400000000; i++)
    ; /* Une boucle pour attendre un peu */
  printf("FIN                                     \n");

  printf("\n\n");

  system("PAUSE");

  return 0;
}
