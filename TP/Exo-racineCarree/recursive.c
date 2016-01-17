#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float encadrement(float droite) {
  // Nous retourne la borne droite de l'encadrement
  int i;
  for (i = 1; i * i < droite; i++)
    ;
  return i;
}

double racine(int valeur, double gauche, double droite, float precision) {
  // Fonction recursive pour calculer la racine de valeur
  if ((droite - gauche) < precision) { // Si on a attein la precision voulu
    return droite; // On retourne la borne droite ( qui est tres proche de la
                   // racine )
  } else {
    if ((((gauche + droite) / 2) * (gauche + droite) / 2) >
        (valeur)) { // Si la milieu de l'intervale au carre est superieur a la
                    // valeur
      droite = (gauche + droite) / 2; // On rabat la borne droite
    } else {
      gauche = (gauche + droite) / 2; // Sinon la borne gauche
    }
    return racine(valeur, gauche, droite,
                  precision); // Puis on execute avec les nouvelle bornes
  }
}

int main() {

  int valeur = 10, y;
  float gauche, droite, precision;

  printf("Valeur : "); // Lecture des info
  scanf("%ld", &valeur);

  printf("Precision : ");
  scanf("%f", &precision);

  droite = (float)encadrement(valeur);
  gauche = droite - 1; // Mise en place de la borne gauche

  printf("La racine carre de %d vaut %f\n", valeur,
         racine(valeur, gauche, droite, precision)); // Execution

  system("PAUSE");

  return 0;
}
