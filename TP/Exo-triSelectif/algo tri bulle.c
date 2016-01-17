#include <stdio.h>
#include <stdlib.h>

int main() {
  int T[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
  int i;
  int tmp;
  int echange = 1;

  while (echange) {
    echange = 0;

    for (i = 0; i < 10; i++) {
      if (T[i] > T[i + 1]) {
        tmp = T[i];
        T[i] = T[i + 1];
        echange = 1;
      }
    }
  }

  for (i = 0; i < 10; i++)
    printf("T[%d] = %d \n", i, T[i]);

  system("pause");

  return 0;
}
