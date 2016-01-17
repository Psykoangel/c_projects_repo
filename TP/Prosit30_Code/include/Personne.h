#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>

#include "Date.h"

class Personne
{
    public:
        Personne();
        Personne(std::string name, std::string forname,int j, int m, int a, int weight);
        ~Personne();

        std::string Getnom() const { return m_nom; }
        void Setnom(std::string val) { m_nom = val; }
        std::string Getprenom() const { return m_prenom; }
        void Setprenom(std::string val) { m_prenom = val; }
        std::string Getdatenaiss() { return m_datenaiss.dateOut(); }
        void Setdatenaiss(int j, int m, int a)
        {
            m_datenaiss.Setjour(j);
            m_datenaiss.Setmois(m);
            m_datenaiss.Setannee(a);
        }
        void Setdatenaiss()
        {

        }
        int Getpoids() const { return m_poids; }
        void Setpoids(int val) { m_poids = val; }

        int aller_au_McQuick(int valeur);

    private:
        std::string m_nom;
        std::string m_prenom;
        Date::Date m_datenaiss;
        int m_poids;
};

#endif // PERSONNE_H
