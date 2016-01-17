#include <iostream>
#include <string>

#include "include\Personne.h"
#include "include\Date.h"
#include "include\Couple.h"

using namespace std;

int main() {
  Personne homme("Scherer", "Michael", 0, 0, 0, 0);

  cout << homme.Getnom() << " " << endl
       << homme.Getprenom() << " " << endl
       << homme.Getpoids() << endl;
  homme.aller_au_McQuick(20);
  cout << homme.Getnom() << " " << endl
       << homme.Getprenom() << " " << endl
       << homme.Getpoids() << endl;
  homme.Setdatenaiss(30, 07, 1992);
  cout << endl << "date de naissance : " << homme.Getdatenaiss() << endl;

  Date temps(10, 5, 1952);
  cout << temps.dateOut() << endl;
  cout << temps.todayDate() << endl;

  return 0;
}
