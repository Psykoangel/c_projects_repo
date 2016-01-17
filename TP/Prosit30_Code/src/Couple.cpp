#include <string>

#include "..\include\Personne.h"
#include "..\include\Date.h"
#include "..\include\Couple.h"

Couple::Couple() {
  // dft ctor
}

Couple::Couple(Personne::Personne perso1, Personne::Personne perso2) {}

int Couple::PoidsTotalCouple(Personne::Personne perso1,
                             Personne::Personne perso2) {
  return perso1.Getpoids() + perso2.Getpoids();
}

void Couple::faire_un_enfant(Personne::Personne perso1,
                             Personne::Personne perso2) {

  Personne enfant;

  enfant.Setnom(Personne::perso1.Getnom);
  enfant.Setdatenaiss();
  enfant.Setpoids(PoidsTotalCouple(perso1, perso2) / 50);
}
