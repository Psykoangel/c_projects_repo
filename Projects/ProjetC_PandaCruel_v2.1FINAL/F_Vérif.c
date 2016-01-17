/*
F_Verif.c
-------------

by Michael SCHERER

role : Fonction contenant le systeme de collision et d'interaction avec les
objets exterieurs.
Last update 07/12/2011.
*/

#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "menu.h"

void verifications(Joueur *joueur, char direction, int nb_case,
                   char tab[TAB_MAX][TAB_MAX]) {
  int i, a; // On declare des variable i et a qui permettront de faore defiler
            // les cases du tableau pour les verifications d'un deplacement.
  int b = -37; // On declare une variable b qui equivaut a -37, autrement dit a
               // la valeur d'un mur.
  int j = 0; // On declare ensuite une variable j qui correspondra au nombre de
             // case de deplacement finale pour le joueur.
  static int invx; // On declare deux variables statiques qui permettront de
                   // memoriser l'emplacement precedent d'un personnage
                   // invisible.
  static int invy; // Pour eviter que les joueurs puissent se passer dessus,
                   // meme en etant invisibles.

  switch (direction) // On fait un switch permettant de bouger le joueur en
                     // fonction de la direction choisie.
  {
  /* Le premier case va verifier et bouger le joueur si la direction choisie est
  "Droite" (D=68 dans la table Ascii).
  Chaque case est simmilaire, les seules choses qui varient sont les operations
  mathematiques
  selon la direction choisie. La logique et les conditions posees sont
  globalement les memes.
  C'est pourquoi nous detaillerons un seul case, en l'occurence, celui-ci. */

  case 68:
    for (i = joueur->x + 1; i <= joueur->x + nb_case; i++)
    // La boucle for permet de faire defiler chaque case du tableau jusqu'a la
    // destination choisie par le joueur.

    {
      a = tab[i][joueur->y]; // A chaque tour de boucle, on redefinit la
                             // variable a comme etant la valeur de la case
                             // suivante dans le tableau.
      printf("\n");
      j++;
      if (a == -83 && tab[joueur->x][joueur->y] != -108) // Si a equivaut a -83
                                                         // (La valeur d'une
                                                         // potion dans le
                                                         // tableau) ET si le
                                                         // joueur n'est pas le
                                                         // panda, alors :
      {
        if (joueur->potion == POTION) // On verifie si le joueur est deje sous
                                      // l'etat d'une potion.
        {
          joueur->nbFiole++; // Si c'est le cas, on ne fait qu'incrementer le
                             // nombre de potion qu'il possede.
        }
        joueur->potion = POTION; // Sinon on change l'etat du joueur afin de lui
                                 // donner l'etat d'une potion, sans augmenter
                                 // le nombre de potion qu'il possede.
        tab[i][joueur->y] = 32;  // Enfin, on remplace dans le tableau la potion
                                 // ramassee par un espace afin qu'elle
                                 // disparaisse du tableau.
      }
      if (a == 31 && tab[joueur->x][joueur->y] != -108) // Si a equivaut a 31
                                                        // (La valeur d'une cape
                                                        // dans le tableau) ET
                                                        // si le joueur n'est
                                                        // pas le panda, alors :
      {
        if (joueur->cape ==
            PAS_CAPE) // On verifie si le joueur possede deja une cape.
        {
          joueur->cape = CAPE_NMISE; // Si ce n'est pas le cas, on change son
                                     // etat pour dire qu'il possede une cape,
                                     // mais qu'elle n'est pas mise.
        }
        joueur->nbCape++; // Dans tout les cas on incremente le nombre de cape
                          // possedees par le joueur.
        tab[i][joueur->y] = 32; // Et, comme pour les potions, on fait
                                // disparaitre la cape du tableau.
      }

      if (a == b) // Si a equivaut a b (b etant la valeur d'un mur dans le
                  // tableau) alors :
      {
        if (joueur->potion ==
            POTION) // On verifie si le joueur est sous l'etat d'une potion.
        {
          if (joueur->nbFiole > 0) // Si c'est le cas on verifie ensuite si son
                                   // nombre de potion est superieur a 0.
          {
            joueur->nbFiole--; // Si c'est le cas, cela signifie que l'on peut
                               // simplement decrementer son nombre de potion
                               // sans changer son etat.
          } else if (joueur->nbFiole == 0) // S'il n'a pas de potion :
          {
            joueur->potion = PAS_POTION; // Dans ce cas on change son etat pour
                                         // lui enlever l'etat de la potion sans
                                         // prendre en compte le mur.
          }
        }

        else if (joueur->potion == PAS_POTION) // Si au contraire, le joueur
                                               // n'est pas sous l'etat d'une
                                               // potion lorsqu'il rencontre un
                                               // mur :
        {
          j--;   // On reajuste la valeur de j.
          break; // Et on brise la boucle, stoppant alors la course du joueur.
        }
      }

      // Si a equivaut a 1 ou a 2 (Les valeurs des joueurs dans le tableau) OU
      // si les coordonees de la prochaine case sont celle d'un joueur
      // invisible, alors :
      if (a == 2 || a == 1 || i == invx && joueur->y == invy) {
        j--;   // On reajuste la valeur de j.
        break; // Et on brise la boucle, en effet les joueurs ne peuvent pas se
               // traverser.
      }

      if (a ==
          -108) // Si a equivaut a -108 (La valeur du panda dans le tableau) :
      {
        j--; // On reajuste j.

        if (tab[joueur->x][joueur->y] != 31) {
          tab[joueur->x][joueur->y] =
              32; // On remplace la position initiale du joueur par un espace
        } // uniquement s'il n'avait pas pose la cape a son emplacement au
        // prealable
        //(Voir dernier case de la fonction)

        joueur->x += j; // Afin de placer le joueur a sa position finale.

        tab[joueur->x][joueur->y] =
            joueur->ico; // On devoile le joueur devant le panda.

        printf("\n\n");
        system("pause");

        joueur->e = 1; // Enfin on modifie e en 1, cela signifie en effet que le
                       // joueur s'est fait devore par le panda ;)
        // Cela sera verifie avant de lancer le prochain tour grace a la
        // fonction Tour.
      }
    }
    if (tab[joueur->x][joueur->y] != 31) // Si et seulement si la position du
                                         // joueur n'est pas egale a celle d'une
                                         // cape,
    { // ce qui signifierait que le joueur vient de poser une cape a ses pieds
      // (voir le dernier case de la fonction), alors :

      tab[joueur->x][joueur->y] = 32; // Dans tout les cas ou la boucle n'a pas
                                      // ete brisee, on remplace la position
                                      // initiale du joueur par un espace
    } //(S'il n'avait pas pose la cape a se pieds au prealable)

    joueur->x += j; // Et on modifie la position finale du joueur avec la
                    // variable j qui a ete au prealable reajuste.

    if (joueur->cape == CAPE_NMISE ||
        joueur->cape ==
            PAS_CAPE) // Enfin, si le joueur n'est pas sous l'etat d'une cape :
    {
      if (joueur->x > 49) // Si l'on remarque que la position en absisse du
                          // joueur est superieure a 49, cela signifie qu'il est
                          // sorti de la
      {                   // carte.
        joueur->x = 49; // On corrige donc ce probleme en replacant correctement
                        // le joueur au bord DROIT de la carte.
      }
      tab[joueur->x][joueur->y] =
          joueur->ico; // On affiche sa position sur la carte (=le tableau).
      invx = -1; // Si le joueur est visible, il est inutile de conserver ses
                 // coordonees x et y pour le tour du joueur suivant.
      invy = -1; // On leur donne donc une valeur inaccessible pour les joueurs.
    }

    else if (joueur->cape ==
             CAPEMISE) // Au contraire, si le joueur utilise la cape, alors :
    {
      if (joueur->x >
          49) // Comme plus haut, si le joueur est sorti de la carte...
      {
        joueur->x = 49; // Alors on corrige le probleme en le replacant au bord
                        // DROIT de la carte.
      }
      invx =
          joueur->x; // On memorise ses coordonees x et y pour le tour suivant.
      invy = joueur->y; // Cela permettra de verifier si un joueur invisible se
                        // trouve sur le chemin du joueur actuel.
    }

    break; // Fin du case pour la direction "Droite".

  // Voici le case pour la direction "Gauche", la logique est la meme, seule les
  // operations changent.
  case 71:
    for (i = joueur->x - 1; i >= joueur->x - nb_case; i--) {
      a = tab[i][joueur->y];
      printf("\n");
      j++;
      if (a == -83 && tab[joueur->x][joueur->y] != -108) {
        if (joueur->potion == POTION) {
          joueur->nbFiole++;
        }
        joueur->potion = POTION;
        tab[i][joueur->y] = 32;
      }
      if (a == 31 && tab[joueur->x][joueur->y] != -108) {
        if (joueur->cape == PAS_CAPE) {
          joueur->cape = CAPE_NMISE;
        }
        joueur->nbCape++;
        tab[i][joueur->y] = 32;
      }
      if (a == b) {
        if (joueur->potion == POTION) {
          if (joueur->nbFiole > 0) {
            joueur->nbFiole--;
          } else if (joueur->nbFiole == 0) {
            joueur->potion = PAS_POTION;
          }
        } else if (joueur->potion == PAS_POTION) {
          j--;
          break;
        }
      }
      if (a == 2 || a == 1 || i == invx && joueur->y == invy) {
        j--;
        break;
      }
      if (a == -108) {
        j--;
        if (tab[joueur->x][joueur->y] != 31) {
          tab[joueur->x][joueur->y] = 32;
        }
        joueur->x += j;

        tab[joueur->x][joueur->y] = joueur->ico;

        printf("\n\n");
        system("pause");

        joueur->e = 1;
      }
    }

    if (tab[joueur->x][joueur->y] != 31) {
      tab[joueur->x][joueur->y] = 32;
    }

    joueur->x -= j;

    if (joueur->cape == CAPE_NMISE || joueur->cape == PAS_CAPE) {
      if (joueur->x < 0) {
        joueur->x = 0;
      }
      tab[joueur->x][joueur->y] = joueur->ico;
      invx = -1;
      invy = -1;
    }

    else if (joueur->cape == CAPEMISE) {
      if (joueur->x < 0) {
        joueur->x = 0;
      }
      invx = joueur->x;
      invy = joueur->y;
    }
    break;

  // Voici le case pour la direction "Bas", la logique est la meme, seule les
  // operations changent.
  case 66:
    for (i = joueur->y + 1; i <= joueur->y + nb_case; i++) {
      a = tab[joueur->x][i];
      printf("\n");
      j++;
      if (a == -83 && tab[joueur->x][joueur->y] != -108) {
        if (joueur->potion == POTION) {
          joueur->nbFiole++;
        }
        joueur->potion = POTION;
        tab[joueur->x][i] = 32;
      }
      if (a == 31 && tab[joueur->x][joueur->y] != -108) {
        if (joueur->cape == PAS_CAPE) {
          joueur->cape = CAPE_NMISE;
        }
        joueur->nbCape++;
        tab[joueur->x][i] = 32;
      }
      if (a == b) {
        if (joueur->potion == POTION) {
          if (joueur->nbFiole > 0) {
            joueur->nbFiole--;
          } else if (joueur->nbFiole == 0) {
            joueur->potion = PAS_POTION;
          }
        } else if (joueur->potion == PAS_POTION) {
          j--;
          break;
        }
      }
      if (a == 2 || a == 1 || i == invx && joueur->y == invy) {
        j--;
        break;
      }
      if (a == -108) {
        j--;
        if (tab[joueur->x][joueur->y] != 31) {
          tab[joueur->x][joueur->y] = 32;
        }

        joueur->x += j;

        tab[joueur->x][joueur->y] = joueur->ico;

        printf("\n\n");
        system("pause");

        joueur->e = 1;
      }
    }

    if (tab[joueur->x][joueur->y] != 31) {
      tab[joueur->x][joueur->y] = 32;
    }

    joueur->y += j;
    if (joueur->cape == CAPE_NMISE || joueur->cape == PAS_CAPE) {
      if (joueur->y > 49) {
        joueur->y = 49;
      }
      tab[joueur->x][joueur->y] = joueur->ico;
      invx = -1;
      invy = -1;
    }

    else if (joueur->cape == CAPEMISE) {
      if (joueur->y > 49) {
        joueur->y = 49;
      }
      invx = joueur->x;
      invy = joueur->y;
    }

    break;

  // Voici le case pour la direction "Haut", la logique est la meme, seule les
  // operations changent.
  case 72:
    for (i = joueur->y - 1; i >= joueur->y - nb_case; i--) {
      a = tab[joueur->x][i];
      printf("\n");
      j++;
      if (a == -83 && tab[joueur->x][joueur->y] != -108) {
        if (joueur->potion == POTION) {
          joueur->nbFiole++;
        }
        joueur->potion = POTION;
        tab[joueur->x][i] = 32;
      }
      if (a == 31 && tab[joueur->x][joueur->y] != -108) {
        if (joueur->cape == PAS_CAPE) {
          joueur->cape = CAPE_NMISE;
        }
        joueur->nbCape++;
        tab[joueur->x][i] = 32;
      }
      if (a == b) {
        if (joueur->potion == POTION) {
          if (joueur->nbFiole > 0) {
            joueur->nbFiole--;
          } else if (joueur->nbFiole == 0) {
            joueur->potion = PAS_POTION;
          }
        } else if (joueur->potion == PAS_POTION) {
          j--;
          break;
        }
      }
      if (a == 2 || a == 1 || i == invx && joueur->y == invy) {
        j--;
        break;
      }
      if (a == -108) {
        j--;

        if (tab[joueur->x][joueur->y] != 31) {
          tab[joueur->x][joueur->y] = 32;
        }

        joueur->x += j;

        tab[joueur->x][joueur->y] = joueur->ico;

        printf("\n\n");
        system("pause");

        joueur->e = 1;
      }
    }

    if (tab[joueur->x][joueur->y] != 31) {
      tab[joueur->x][joueur->y] = 32;
    }

    joueur->y -= j;
    if (joueur->cape == CAPE_NMISE || joueur->cape == PAS_CAPE) {
      if (joueur->y < 0) {
        joueur->y = 0;
      }
      tab[joueur->x][joueur->y] = joueur->ico;
      invx = -1;
      invy = -1;
    }

    else if (joueur->cape == CAPEMISE) {
      if (joueur->y < 0) {
        joueur->y = 0;
      }

      invx = joueur->x;
      invy = joueur->y;
    }
    break;

  //*** Fin des cases pour la direction ***

  // Voici le case pour la gestion des capes
  case 67:
    if (joueur->cape == PAS_CAPE) // Si le joueur n'a pas de cape, il ne peut
                                  // acceder au menu des capes
    {
      char Rep[5] = {0};

      printf("\n\nVous n'avez pas de cape !\n\n");
      system("pause"); // On lui affiche donc qu'il n'a pas de cape.
      system("cls");
      for (j = 0; j < TAB_MAX; j++) {
        for (i = 0; i < TAB_MAX; i++) // Puis on reaffiche le tableau avant de
                                      // relancer la fonction turn_J, pour que
                                      // le joueur
        { // puisse saisir le deplacement de son personnage.
          affiche(tab, i, j);
        }
      }
      printf("\n\nTour de %s\n", joueur->name);

      Turn_J(tab, joueur, Rep);
    }

    else if (joueur->cape != PAS_CAPE) // Si au contraire le joueur possede au
                                       // moins une cape (Qu'elle soit mise ou
                                       // non), alors :
    {
      int choix = 0; // On initialise une variable "choix" qui permettra e
                     // l'utilisateur de choisir une option dans le menu des
                     // capes.
      printf("\n\n --Cape--\n\n");
      printf("1. Se vetir ou se devetir de la cape\n");
      printf("2. Poser la cape\n\n");
      printf("Choix : ");
      scanf("%d", &choix);

      switch (choix) {
      // Si le joueur choisit de se devetir ou de se vetir de la cape...
      case 1:
        if (joueur->cape ==
            CAPE_NMISE) // Si le joueur ne porte pas la cape, alors :
        {
          joueur->cape = CAPEMISE; // On lui fait porter la cape en modifiant la
                                   // variable cape.
          printf("\n\nVous placez la cape sur votre dos et devenez ainsi "
                 "invisible !\n\n");
          system("pause");
          tab[joueur->x][joueur->y] = 32; // Puis on change la valeur de sa
                                          // position dans le tableau en espace,
                                          // le rendant ainsi invisible.
          invx = joueur->x; // Si la cape est mise, on memorise alors les
                            // coordonees du joueur invisible.
          invy = joueur->y; // Comme vu plus haut.
          break;
        }

        else if (joueur->cape ==
                 CAPEMISE) // Si au contraire, le joueur porte une cape, alors :
        {
          joueur->cape = CAPE_NMISE; // On lui fait enlever la cape en modifiant
                                     // la meme variable qu'auparavant.
          printf("\n\nVous retirez la cape de votre dos et redevenez ainsi "
                 "visible !\n\n");
          system("pause");
          tab[joueur->x][joueur->y] =
              joueur->ico; // Puis on change la valeur de sa position dans le
                           // tableau, en celle de son icone.
          break;
        }
        break;

      // Sinon, si le joueur decide de poser la cape, alors :
      case 2:
        printf("\n\n Vous deposez la cape a vos pieds, esperons que votre "
               "adversaire ne la trouve pas !\n\n");
        system("pause");

        if (joueur->nbCape == 1) // Si le joueur ne possede qu'une seule cape.
        {
          joueur->cape = PAS_CAPE; // Dans ce cas, on change son etat pour dire
                                   // qu'il n'a plus de cape.
        }
        joueur->nbCape--; // Dans tout les cas, on decremente le nombre de cape
                          // possede par le joueur.
        tab[joueur->x][joueur->y] = 31; // Puis on remplace l'icone du joueur
                                        // par celui de la cape dans le tableau.
        break;
      }
      break;
    }

  default: // Le default est necessaire au bon fonctionnement de case, mais il
           // ne sera jamais utilise, en effet la direction ne peut que
    break; // etre egale e "H, G, D, ou B" vue qu'elle est verifiee dans une
           // fonction precedente.
  }
  system("cls"); // On efface ce qui est affiche a l'ecran pour une meilleur
                 // lisibilite.

  for (j = 0; j < TAB_MAX; j++) {
    for (i = 0; i < TAB_MAX;
         i++) // Pour finir, on reaffiche le tableau (=La Carte)
    {
      affiche(tab, i, j);
    }
  }
}
// ******************************************************************
