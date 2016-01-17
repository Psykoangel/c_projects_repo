/*
Sauvegarde.c
-------------

by Michael Scherer

rôle : permet aux utilisateurs de sauvegarder leur partie.
Last update 07/12/2011.
*/

#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "menu.h"
/*
int Save(char tab[TAB_MAX][TAB_MAX], Joueur *joueur1, Joueur *joueur2)
{
    int i, j;
    FILE* fichier = NULL;
    FILE* fichier2 = NULL;

    fichier = fopen("save.save", "w+");
    fichier2 = fopen("savejoueur.save", "w+");

    if(fichier == NULL || fichier2 == NULL)
    {
        printf("Impossible d'ouvrir le fichier save.save ou
savejoueur.save.\nVerifier si les fichier se trouve dans le repertoire du
jeu.");
    }

    for(j = 0; j < TAB_MAX; j++)
    {
        for(i = 0; i < TAB_MAX; i++)
        {
            fputc('tab[i][j]', fichier);
        }
    }
    fprintf(fichier2, "%d %d %d %d", joueur1->x, joueur1->y, joueur2->x,
joueur2->y);

    fclose(fichier2);
    fclose(fichier);
    Quitter();
}
*/

int continu(char tab[TAB_MAX][TAB_MAX], Joueur *joueur1, Joueur *joueur2) {
  int i, j;
  FILE *fichier = NULL, *fichier2 = NULL;

  fichier = fopen("save.save", "r");
  fichier2 = fopen("savejoueur.save", "r");
  if (fichier == NULL || fichier2 == NULL) {
    printf("Impossible d'ouvrir le fichier save.save ou "
           "savejoueur.save.\nVerifier si les fichier se trouve dans le "
           "repertoire du jeu.");
    return 1;
  }

  for (j = 0; j < TAB_MAX; j++) {
    for (i = 0; i < TAB_MAX; i++) {
      tab[i][j] = fgetc(fichier);
    }
  }

  fscanf(fichier2, "%s %s %d %d %d %d", joueur1->name, joueur2->name,
         &joueur1->x, &joueur1->y, &joueur2->x, &joueur2->y);

  fclose(fichier);
  fclose(fichier2);

  return 0;
}
