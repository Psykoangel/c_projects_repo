#ifndef COUPLE_H
#define COUPLE_H

#include <string>

#include "Personne.h"

class Couple
{
    public:
        Couple();
        Couple(Personne::Personne perso1, Personne::Personne perso2);

        std::string Getdatemariage() { return m_datemariage.dateOut(); }
        void Setdatemariage(int j, int m, int a)
        {
            m_datemariage.Setjour(j);
            m_datemariage.Setmois(m);
            m_datemariage.Setannee(a);
        }

        int PoidsTotalCouple(Personne::Personne m_perso1, Personne::Personne m_perso2);
        void faire_un_enfant(Personne::Personne m_perso1, Personne::Personne m_perso2);

    private:
        Personne::Personne m_perso1;
        Personne::Personne m_perso2;
        Date::Date m_datemariage;
};

#endif // COUPLE_H
