/*
quitter_jeux.c
-------------

by Michael SCHERER

rôle : Fonction permettant de quitter le jeu avec confirmation.
Last update 06/12/2011.
*/

#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int Quitter() {
  char quitter = 'a';
  int continu = 1;

  printf(
      "voulez-vous quitter Harry Trotteur et le Panda Cruel ? (o/n) "); // demande
                                                                        // au
  // joueur
  // si il
  // veut
  // quitter
  // le
  // jeux
  // ou
  // pas
  scanf("%s", &quitter);

  while (!(continu)) {
    if (quitter == 'o' || quitter == 'O' || quitter == 'e') {
      if (quitter == 'o' || quitter == 'O') {
        system("cls");
        printf("\n\n Merci D'avoir jouer a Harry Trotteur et le Panda Cruel a "
               "bientot !!\n\n"); // message si joueur quitte le jeux
        printf("\n       Par SCHERER Michael, LUX Adrien, BURGARD Vincent, et "
               "TRISSE Antoine");
        printf("\n       2011 eXia.Cesi, Tout droits reserves\n");
        exit(EXIT_SUCCESS);

      } else if (quitter == 'e') {
        printf("\n\n\nMerci a Elouan --- Seigneur du C ---\nPour ses "
               "corrections de fautes betes\nSa presence et pour tout le reste "
               "!!!\n");
        Sleep(400);
        system("cls");
        printf("\n\n Merci D'avoir jouer a Harry Trotteur et le Panda Cruel a "
               "bientot !!\n\n"); // message si joueur quitte le jeux
        printf("\n       Par SCHERER Michael, LUX Adrien, BURGARD Vincent, et "
               "TRISSE Antoine");
        printf("\n       2011 eXia.Cesi, Tout droits reserves\n");
        exit(EXIT_SUCCESS);
      }

    } else if (quitter == 'n' || quitter == 'N') {
      return 0;

    } else {

      continu = 1;
      printf("Saisie impossible.\n"); // message si joueur tape autre chose que
                                      // oui ou non

      scanf("%s", &quitter);

      Quitter();
    }
  }
}
