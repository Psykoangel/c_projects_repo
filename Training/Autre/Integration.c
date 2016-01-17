#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j = 0;
  int tmp = 0;
  int T[10] = {50, 902, 39, 60, 48, 230, 589, 3, 45, 7};

  for (i = 1; i <= 10 - 1; i++) {
    while ((j <= (i - 1)) && T[i - j] < T[i - j - 1]) {
      tmp = T[i - j];
      T[i - j] = T[i - j - 1];
      T[i - j - 1] = tmp;
      j = j + 1;
    }
  }

  for (i = 0; i < 10; i++) {
    printf("%ld\n", T[i]);
  }

  system("PAUSE");

  return 0;
}
