#include <string>
#include <time.h>
#include <sstream>

#include "..\include\Date.h"

Date::Date() {
  // dft ctor
  struct tm Today;
  time_t now;

  time(&now);
  Today = *localtime(&now);

  m_jour = Today.tm_mday;
  m_mois = (Today.tm_mon + 1);
  m_annee = (Today.tm_year + 1900);
}

Date::Date(int day, int month, int year)
    : m_jour(day), m_mois(month), m_annee(year) {}

std::string Date::dateOut() {
  std::string result;
  std::stringstream out, out2, out3;
  out << m_jour;
  out2 << m_mois;
  out3 << m_annee;
  result = out.str() + "." + out2.str() + "." + out3.str();
  return result;
}

std::string Date::todayDate() {
  /*struct tm Today;
      time_t now;

      time(&now);
      Today = *localtime(&now);

      m_jour = Today.tm_mday;
      m_mois = (Today.tm_mon + 1);
      m_annee = (Today.tm_year + 1900);*/

  std::string result;
  std::stringstream out, out2, out3;
  out << m_jour;
  out2 << m_mois;
  out3 << m_annee;
  result = out.str() + "." + out2.str() + "." + out3.str();
  return result;
}
