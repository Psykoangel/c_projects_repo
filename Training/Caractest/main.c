#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;
  for (i = 200; i < 300; i++) {
    char car = i;
    printf("%d : %c\n", i, car);
  }
  return 0;
}
