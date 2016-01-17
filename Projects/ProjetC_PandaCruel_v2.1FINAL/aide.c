/*
By Michael Scherer
Begin on 5/12/2011
Last update 6/12/2011
Code contenant l'aide et les regles du jeu.
*/

// On inclut les bibliotheques
#include <stdlib.h>
#include <stdio.h>

#include "main.h"

double aide(double retourMenu) // Fonction d'aide
{
  system("cls");

  FILE *fichierAide =
      NULL; // Initialisation du fichier contenant la doc d'aide.
  char chaineDoc[TAILLE_CHAINE] =
      ""; // Cette chaine de caractere va lire le fichier ligne par ligne.

  fichierAide = fopen("docAide.txt", "r"); // Ouverture du fichier.

  if (fichierAide !=
      NULL) // Une fois le fichier trouve, cette commande s'appliquera
  {

    while (fgets(chaineDoc, TAILLE_CHAINE, fichierAide) !=
           NULL) // On lit le fichier tant qu'on ne recoit pas d'erreur (NULL),
                 // c'est a dire tant qu'il n'est pas fini.
    {
      printf("%s", chaineDoc); // On affiche la chaine qu'on vient de lire.
    }

    printf("\n\n\n  --- Representations ---\n");
    printf("\n");
    printf("%c = Joueur 1\n", 1);
    printf("%c = Joueur 2\n", 2);
    printf("%c = Panda cruel\n", 153);
    printf("%c = Cape\n", 31);
    printf("%c = Potion\n", 173);
    printf("%c = Mur\n", 219);

    fclose(fichierAide); // Fermeture du fichier
  }

  // Pour revenir au menu

  printf("\n\n");
  printf("Entrez une valeur numerique pour revenir au menu:");
  scanf("%d", &retourMenu);

  while (retourMenu < 0 || retourMenu > 9) {
    printf("Entrez une valeur numerique pour revenir au menu:");
    scanf("%d", &retourMenu);
  }

  return retourMenu; // On renvoit la valeur a menu.c
}
