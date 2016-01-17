#include <stdio.h>

int main() {
  int profondeur;
  float vitesse_de_remontee;
  float temps_global;
  float palier;

  printf("Entrez la vitesse de remontée : ");
  scanf("%f", &vitesse_de_remontee);
  printf("Entrez la profondeur : ");
  scanf("%d", &profondeur);

  temps_global = 0.f;
  palier = 0.f;

  if ((profondeur > 30) && (profondeur % 10 != 0)) {
    palier = ((profondeur - (profondeur % 10)) - 30) / 10 * 25;

    printf("Arrêtez-vous après %d mètres pendant %fs, vous y parviendrez après "
           "%fs de natation\n",
           profondeur % 10, palier, temps_global);

    temps_global = (profondeur % 10) / vitesse_de_remontee;
    profondeur -= profondeur % 10;
    temps_global += palier;
  }

  while (profondeur > 30) {
    palier = 100 + (profondeur - 30) / 10.f * 25.f;

    printf("Arrêtez-vous après %d mètres pendant  %fs, vous y parviendrez "
           "après %fs de natation\n",
           profondeur, palier, temps_global);

    temps_global += 10 / vitesse_de_remontee;
    profondeur -= 10;
    temps_global += palier;
  }

  if (profondeur == 30) {
    palier = 100;

    printf("Arrêtez-vous après %d mètres pendant  %fs, vous y parviendrez "
           "après %fs de natation\n",
           profondeur, palier, temps_global);

    temps_global += 100;
    profondeur -= 3;
    temps_global +=
        3 / vitesse_de_remontee; // corrigé, ça semblait faux dans l'algo
  }

  while ((profondeur > 0) && (profondeur <= 30)) {

    palier = 100 - (30 - profondeur) / 3.f * 10.f;

    printf("Arrêtez-vous après %d mètres pendant  %fs, vous y parviendrez "
           "après %fs de natation\n",
           profondeur, palier, temps_global);

    temps_global += 3 / vitesse_de_remontee;
    profondeur -= 3;
    temps_global += palier;
  }

  printf("Vous êtes arrivé à la surface après %fs\n", temps_global);

  return 0;
}
