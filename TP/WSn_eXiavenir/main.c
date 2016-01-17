#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#include "main.h"

//--saisie des donnees --
void saisie(int *jnaiss, int *mnaiss, int *anaiss, int *jpred, int *mpred,
            int *apred) {
  printf("Entrez votre date de naissance (jj mm aaaa) : ");
  scanf("%d %d %d", jnaiss, mnaiss, anaiss);
  printf("Les astres sont avec vous\nVeuillez maintenant entrer la date du "
         "jour dont vous voulez la prediction (jj mm aaaa) :");
  scanf("%d %d %d", jpred, mpred, apred);
}

//--Controle des donnees--
int controle(int jnaiss, int mnaiss, int anaiss, int jpred, int mpred,
             int apred) {
  if ((((jnaiss < 0) || (jnaiss > 31)) || ((mnaiss < 0) || (mnaiss > 12))) ||
      ((anaiss < 1000) || (anaiss > 10000)))
    return 1;
  //--Verifie tous les cas : date naissance (true) | date prediction (false)--
  else if (!((((jnaiss < 0) || (jnaiss > 31)) ||
              ((mnaiss < 0) || (mnaiss > 12))) ||
             ((anaiss < 1000) || (anaiss > 10000))) &&
           ((((jpred < 0) || (jpred > 31)) || ((mpred < 0) || (mpred > 12))) ||
            ((apred < 1000) || (apred > 10000))))
    return 2;
  else if (apred < anaiss)
    return 3;
  else
    return 0;
}

//--Utilise le code envoyer par controle() pour afficher error message--
void erreur(int code) {
  switch (code) {
  case 3:
    printf("\nDate de prediction anterieure a la date de naissance . "
           "Impossible.\n");
    break;
  case 2:
    printf("\nDate de prediction incoherente . verifiez le jour, le mois et l "
           "annee saisis.\n");
    break;
  case 1:
    printf("\nDate de naissance incoherente . verifiez le jour, le mois et l "
           "annee saisis.\n");
  default:
    printf("\n");
  }
}

//--Calcul base sur la date de naissance--
int calcul_amour(int jnaiss, int mnaiss, int anaiss, int jpred, int mpred,
                 int apred) {
  int MIN = 0, MAX = 0;
  anaiss -= (jnaiss + mnaiss);
  anaiss = (anaiss / anaiss) + 65;
  MIN = anaiss;
  MAX = anaiss + 35;
  return ((rand() % (MAX - MIN + 1)) + MIN); //--calcul Aleatoire--
}

//--Calcul base sur la date de prediction--
int calcul_travail(int jnaiss, int mnaiss, int anaiss, int jpred, int mpred,
                   int apred) {
  int MIN = 0, MAX = 0;
  apred -= (jpred + mpred);
  apred = (apred / apred) + 70;
  MIN = apred;
  MAX = apred + 22;
  return ((rand() % (MAX - MIN + 1)) + MIN); //--calcul Aleatoire--
}

//--Calcul base sur les dates de naissance et de prediction--
int calcul_argent(int jnaiss, int mnaiss, int anaiss, int jpred, int mpred,
                  int apred) {
  int MIN = 0, MAX = 0;
  anaiss -= (jnaiss + mnaiss);
  apred -= (jpred + mpred);
  anaiss = (anaiss / anaiss) + 15;
  apred = (apred / apred) + 35;
  MIN = (apred + anaiss);
  MAX = (apred + anaiss) + 50;
  return ((rand() % (MAX - MIN + 1)) + MIN); //--calcul Aleatoire--
}

//--Affichage des differentes reponses en fonction des degres--
void affichage_detail(int degreplus) {
  switch (degreplus) {
  case 0:
    printf("Le neant absolu. VDM !\n");
    break;
  case 1:
    printf("N y pense meme pas !!!\n");
    break;
  case 2:
    printf("De mauvaises nouvelles en perspective ...\n");
    break;
  case 3:
    printf("Mouais, ceest pas vraiment ea ...\n");
    break;
  case 4:
    printf("Comme ci... comme ea...\n");
    break;
  case 5:
    printf("Bien mais pas top. \n");
    break;
  case 6:
    printf("De bonnes surprises en perspective !\n");
    break;
  case 7:
    printf("Tout vous reussit !!!!\n");
    break;
  default:
    printf("Votre esprit est tellement obscure que je n y voie rien du tout "
           "!!"); //-- ne s affichera jamais
  }
}

//--repete la saisie et le error message tant que condition = (!true)--
void acquisition(int *jnaiss, int *mnaiss, int *anaiss, int *jpred, int *mpred,
                 int *apred) {
  do {
    saisie(jnaiss, mnaiss, anaiss, jpred, mpred, apred);
    erreur(controle(*jnaiss, *mnaiss, *anaiss, *jpred, *mpred, *apred));
  } while (
      ((((*jnaiss < 0) || (*jnaiss > 31)) ||
        ((*mnaiss < 0) || (*mnaiss > 12))) ||
       ((*anaiss < 1000) || (*anaiss > 10000))) ||
      ((((*jpred < 0) || (*jpred > 31)) || ((*mpred < 0) || (*mpred > 12))) ||
       ((*apred < 1000) || (*apred > 10000))));
}

//--Modifie les valeurs des variables pointees et retourne "degreplus_global" ->
// main--
int calcul_predictions(int jnaiss, int mnaiss, int anaiss, int jpred, int mpred,
                       int apred, int *degreplus_amour, int *degreplus_travail,
                       int *degreplus_argent) {
  *degreplus_amour =
      (calcul_amour(jnaiss, mnaiss, anaiss, jpred, mpred, apred) % 8);
  *degreplus_travail =
      (calcul_travail(jnaiss, mnaiss, anaiss, jpred, mpred, apred) % 8);
  *degreplus_argent =
      (calcul_argent(jnaiss, mnaiss, anaiss, jpred, mpred, apred) % 8);
  return (((*degreplus_amour + *degreplus_argent + *degreplus_travail) / 3) +
          2);
}

//--reccupere les modif. de calcul_prediction, puis utilise affichage_detail--
void affichage(int degreplus_global, int degreplus_amour, int degreplus_travail,
               int degreplus_argent) {
  printf("Les astres ont parles !!\n");
  printf("Votre degre de positivite en AMOUR : \n");
  affichage_detail(degreplus_amour);
  printf("\nVotre degre de positivite en ARGENT : \n");
  affichage_detail(degreplus_argent);
  printf("\nVotre degre de positivite pour le TRAVAIL : \n");
  affichage_detail(degreplus_travail);
  printf("\nVotre degre de positivite GLOBAL : \n");
  affichage_detail(degreplus_global);
}

//--Programme principal--
int main() {
  int jnaiss = 0, mnaiss = 0, anaiss = 0, jpred = 0, mpred = 0, apred = 0;
  int degreplus_global = 0, degreplus_amour = 0, degreplus_travail = 0,
      degreplus_argent = 0;
  srand(time(NULL));

  acquisition(&jnaiss, &mnaiss, &anaiss, &jpred, &mpred, &apred);
  degreplus_global = (calcul_predictions(
      jnaiss, mnaiss, anaiss, jpred, mpred, apred, &degreplus_amour,
      &degreplus_travail, &degreplus_argent));
  affichage(degreplus_global, degreplus_amour, degreplus_travail,
            degreplus_argent);
  printf("\n\nMerci d'avoir utilise EXIAVENIR !!!\n\n    Que les astres vous "
         "protegent !!!\n\n      Et revenez si vous avez un autre doute sur "
         "votre avenir !!\n\n");

  return 0;
}
