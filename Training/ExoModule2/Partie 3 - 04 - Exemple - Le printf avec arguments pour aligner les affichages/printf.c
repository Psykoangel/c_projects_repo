/***********************************************************/
/* Programme printf.c                                      */
/*---------------------------------------------------------*/
/* Exemple de la partie 3 du module 2                      */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  printf("\n\n");

  printf("%%-8d   -> %-8d\n", 1234);
  printf("%%8d    -> %8d\n", 1234);

  printf("%%-8.3f -> %-8.3f\n", 12.34);
  printf("%%8.3f  -> %8.3f\n", 12.34);

  printf("%%-8c   -> %-8c\n", 'A');
  printf("%%8c    -> %8c\n", 'A');

  printf("%%-8s   -> %-8s\n", "abcd");
  printf("%%8s    -> %8s\n", "abcd");

  printf("\n\n");

  system("PAUSE");

  return 0;
}
