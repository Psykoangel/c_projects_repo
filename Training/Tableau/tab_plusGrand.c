#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int mon_premier_tableau[] = {1, 2, 3, 4, 5, 0, 9, 8, 7, 6};
  int compteur;
  int plus_grande = mon_premier_tableau[0];

  for (compteur = 1; compteur < 10; compteur++) {

    if (plus_grande < mon_premier_tableau[compteur]) {
      plus_grande = mon_premier_tableau[compteur];
    }
  }

  printf("%d", plus_grande);

  return 0;
}
