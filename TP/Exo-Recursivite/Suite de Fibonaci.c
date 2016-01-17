#include <stdio.h>
#include <stdlib.h>

int Cnp(int n, int p) {
  if (n == p || p == 0)
    return 1;
  else
    return (Cnp(n - 1, p - 1) + Cnp(n - 1, p));
}

int main() {
  printf("%d", Cnp(4, 3));

  return 0;
}
