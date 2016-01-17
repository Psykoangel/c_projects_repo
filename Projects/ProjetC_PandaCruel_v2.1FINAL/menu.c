/*
By Michael SCHERER
Begin 5/12/2011
Last update 6/12/2011
Code destine e afficher le menu
*/

// Inclusion des bibliotheques
#include <stdlib.h>
#include <stdio.h>

// On inclut les fichiers externes contentant les fonctions necessaires
#include "menu.h"
#include "main.h"

int afficheMenu(char tab[TAB_MAX][TAB_MAX], Joueur *joueur1, Joueur *joueur2,
                Joueur *ePanda) // Fonction qui affichera le menu et ses options
{
  int choix = 0;      // Fonction qui retournera une valeur
  int retourMenu = 0; // Pour revenir au menu apres avoir lu l'aide
  ePanda->e = 0;      // Initialisation de la variable du comportement du panda

  do {
    system("cls");
    printf("|   |                        --.--          |    |                 "
           "  \n");
    printf("|---|,---.,---.,---.,   .      |  ,---.,---.|--- |--- ,---..   "
           ".,---.\n");
    printf("|   |,---||    |    |   |      |  |    |   ||    |    |---'|   ||  "
           "  \n");
    printf("`   '`---^`    `    `---|      `  `    `---'`---'`---'`---'`---'`  "
           "  \n");
    printf("                    `---'                                          "
           "  \n");
    printf(",---.|        |             ,---.              |     \n");
    printf("|--- |---     |    ,---.    |---',---.,---.,---|,---.\n");
    printf("|    |        |    |---'    |    ,---||   ||   |,---|\n");
    printf("`---'`---'    `---'`---'    `    `---^`   '`---'`---^\n");
    printf("                                                     \n");
    printf(",---.               |                                \n");
    printf("|    ,---..   .,---.|                                \n");
    printf("|    |    |   ||---'|                                \n");
    printf("`---'`    `---'`---'`---'                            \n");

    printf("\n1 - Jeu en mode panda statique\n");
    printf("2 - Jeu en mode panda mobile\n");
    printf("3 - Aide\n");
    printf("4 - Continuer la derniere partie\n");
    printf("5 - Quitter la selection\n");
    printf("\nVeuillez entrer votre choix : ");
    scanf("%d", &choix);
    printf("\n");

    switch (choix) {
    case 1:
      ePanda->e = 0; // ePanda.e vaut 0 si le panda est statique
      panda(joueur1, joueur2, ePanda);
      return EXIT_SUCCESS;
      break;

    case 2:
      ePanda->e = 1; // ePanda.e vaut 1 si le panda est statique
      panda(joueur1, joueur2, ePanda);
      return EXIT_SUCCESS;
      break;

    case 3:
      aide(retourMenu);  // Renvoie l'affichage de l'aide du jeu
      while (retourMenu) // Tant qu'une valeur est renvoyee depuis aide.c, on
                         // nettoiera la console et on affichera le menu
      {
        system("cls"); // Nettoie l'affichage de la console, sous Windows
        afficheMenu(tab, joueur1, joueur2, ePanda); // Reaffiche le menu.
      }
      system("cls");
      break;

    case 4:
      printf("En maintenance\n\n");
      system("PAUSE");
      system("cls");
      afficheMenu(tab, joueur1, joueur2, ePanda); // Reaffiche le menu.
                                                  /*
                                                      if(continu(tab, joueur1, joueur2) == 1)
                                                      {
                                                          Sleep(250);
                                                          system("cls");
                                                          afficheMenu(tab, joueur1, joueur2, ePanda); // Reaffiche le menu.
                                                      }*/
      break;

    case 5:
      if (Quitter() == 0) {
        system("cls");
        afficheMenu(tab, joueur1, joueur2, ePanda); // Reaffiche le menu.
      }
      break;

    default:
      printf("\nValeur incorrecte. Veuillez recommencer.\n\n");
      system("cls");
    }
  } while (choix != 1 || choix != 2 || choix != 3 || choix != 4 ||
           choix != 5); // Si le choix est incorrect, on le signalera et on
                        // reaffichera la liste de choix

  return EXIT_SUCCESS;
}
