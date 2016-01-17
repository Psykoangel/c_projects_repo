#ifndef DATE_H
#define DATE_H

#include <string>

class Date
{
    public:
        Date();
        Date(int day, int month, int year);

        int Getjour() { return m_jour; }
        void Setjour(int val) { m_jour = val; }
        int Getmois() { return m_mois; }
        void Setmois(int val) { m_mois = val; }
        int Getannee() { return m_annee; }
        void Setannee(int val) { m_annee = val; }

        std::string dateOut();
        std::string todayDate();

    private:
        int m_jour;
        int m_mois;
        int m_annee;
};

#endif // DATE_H
