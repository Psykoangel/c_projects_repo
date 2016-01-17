#include <stdio.h>
#include <stdlib.h>

void blabla(int, int, int);
int con(int, int);

int main() {

  int la = 0, ci = 0, m, n, p;

  m = con(la, ci);
  blabla(m, n, p);

  return 0;
}

void blabla(int m, int n, int p) { printf("blabla %d", m); }

int con(int la, int ci) {
  int tot = 0;
  la = 5;
  ci = 15;
  tot = la + ci;

  return tot;
}
