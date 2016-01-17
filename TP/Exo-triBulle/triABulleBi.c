// Tri a bulle Bidirectionnel

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10

int main(void) {

  int tableau[TAILLE] = {4, 38, 2, 256, 1, 2569, 4, 9, 25, 36};
  int gauche = 0;
  int droite =
      TAILLE -
      1; // TAILLE du tableau - 1, pour rester dans les cases mémoire du tableau
  int changement =
      1; // On le met à 1 au début, pour entrer dans la boucle au moins une fois
  int i, echange, deplacement = 0, permutation = 0;

  // affichage du tableau non trié
  printf("Tableau original : ");
  for (i = 0; i < 10; i++)
    printf("%d ", tableau[i]);
  printf("\n");

  // Boucle principale
  while ((changement == 1) &&
         (droite > gauche)) { // Une fois que le programme realise un tour sans
                              // changement, le tableau est trier, on ne rentre
                              // donc plus dans la boucle de trie
    changement = 0;

    // Tri de gauche à droite
    for (i = gauche; i < droite;
         i++) { // On parcourt le tableau de gauche à droite

      if (tableau[i] > tableau[i + 1]) { // Si les deux éléments ne sont pas
                                         // dans le bon ordre, on échange
        echange = tableau[i];
        tableau[i] = tableau[i + 1];
        tableau[i + 1] = echange;
        changement = 1;
        permutation++;
      }

      deplacement++;
    }

    // A droite, il y a la valeur la plus grande, on a donc plus a s'en soucier,
    // on réduit alors la borne de droite
    droite--;

    // Tri de droite à gauche
    for (i = droite; i > gauche; i--) { // On parcourt de droite à gauche
      if (tableau[i] <
          tableau[i - 1]) { // Si l'ordre n'est pas le bon, on echange

        echange = tableau[i];
        tableau[i] = tableau[i - 1];
        tableau[i - 1] = echange;
        changement = 1;
        permutation++;
      }

      deplacement++;
    }

    gauche++; // A gauche, la plus petite, on réduit donc la borne gauche
  }

  printf("Tableau final : ");
  for (i = 0; i < 10; i++)
    printf("%d ", tableau[i]);
  printf("\n");

  printf("Statistiques -> Echanges : %d, Comparaisons : %d\n", permutation,
         deplacement);

  return 0;
}
