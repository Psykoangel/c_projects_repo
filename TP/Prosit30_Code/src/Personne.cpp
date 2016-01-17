#include <string>

#include "..\include\Personne.h"
#include "..\include\Date.h"

Personne::Personne()
    : m_nom(""), m_prenom(""), m_datenaiss(0, 0, 0), m_poids(0) {
  // dft ctor
}

Personne::Personne(std::string name, std::string forname = "", int j = 0,
                   int m = 0, int a = 0, int weight = 0)
    : m_nom(name), m_prenom(forname), m_datenaiss(j, m, a), m_poids(weight) {}

Personne::~Personne() {
  // dtor
}

int Personne::aller_au_McQuick(int valeur) { return m_poids += valeur; }
