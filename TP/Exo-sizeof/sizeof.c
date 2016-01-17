#include <stdio.h>
#include <stdlib.h>
main() {
  printf("La taille du char est : %d\n", sizeof(char));
  printf("La taille du int est : %d\n", sizeof(int));
  printf("La taille du long est : %d\n", sizeof(long));
  printf("La taille du long long est : %d\n", sizeof(long long));
  printf("La taille du long double est : %d\n", sizeof(long double));

  system("PAUSE");

  return 0;
}
