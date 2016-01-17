#include <stdio.h>

// calculer_moyenne : calcule la moyenne des �l�ments
// d'un tableau d'entiers
// sortie : le r�sultat est un r�el
// entr�es : tab[] le tableau
//           nb_elements : nombre d'�l�ments du tableau

double calculer_moyenne(int tab[], int nb_elements) {
  // compteur de boucle
  int compteur;
  // total des notes
  double total = 0;

  // calcul total des notes
  for (compteur = 0; compteur < nb_elements; compteur++)
    total += tab[compteur];

  // retour de la moyenne
  return total / nb_elements;
}

int main() {
  // tableau des notes des �l�ves
  int tab_notes[16] = {10, 12, 8, 20, 19, 6, 12, 9,
                       13, 11, 7, 16, 13, 7, 14, 16};

  printf("moyenne : %.4f \n", calculer_moyenne(tab_notes, 16));
  system("pause");
  return 0;
}
