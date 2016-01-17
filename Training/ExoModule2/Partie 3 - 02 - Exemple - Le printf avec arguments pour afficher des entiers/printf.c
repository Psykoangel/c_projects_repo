/***********************************************************/
/* Programme printf.c                                      */
/*---------------------------------------------------------*/
/* Exemple de la partie 3 du module 2                      */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int i = 1;
  int j = 24;
  double d = 4.4;
  long l = 8;

  printf("1. Affichage avec 3 arguments de type different :\n");
  printf("-------------------------------------------------\n\n");

  printf(" i=%i \n d=%f \n l=%u", i, d, l);

  printf("\n\n");
  printf("2. Indication de la base et du signe :\n");
  printf("--------------------------------------\n\n");

  printf("La valeur %d en decimal signe :\t\t%i\n", 24, 24);
  printf("La valeur %d en octal non signe :\t%o\n", 24, 24);
  printf("La valeur %d en decimal non signe :\t%u\n", 24, 24);
  printf("La valeur %d en hexadecimal majuscule :\t%x\n", 24, 24);
  printf("La valeur %d en hexadecimal minuscule :\t%X\n", 24, 24);

  printf("\n\n");
  printf("3. Specification de la taille minimale :\n");
  printf("----------------------------------------\n\n");

  printf("%%5d -> %5d \n", 12);
  printf("%%5d -> %5d \n", 1234);
  printf("%%5d -> %5d \n", 12345);
  printf("%%5d -> %5d \n", 1234567);

  printf("\n\n");
  printf("4. Specification de la precision :\n");
  printf("----------------------------------\n\n");

  printf("%%.5d -> %.5d \n", 12);
  printf("%%.5d -> %.5d \n", 1234);
  printf("%%.5d -> %.5d \n", 12345);
  printf("%%.5d -> %.5d \n", 1234567);

  printf("\n\n");
  printf("5. Specification simultanee de la taille et de la precision :\n");
  printf("-------------------------------------------------------------\n\n");

  printf("%%8.4d -> %8.4d \n", 12);
  printf("%%4.8d -> %4.8d \n", 12);
  printf("%%8.4d -> %8.4d \n", 123456);
  printf("%%4.8d -> %4.8d \n", 123456);
  printf("%%8.4d -> %8.4d \n", 1234567890);
  printf("%%4.8d -> %4.8d \n", 1234567890);

  printf("\n\n");

  system("PAUSE");

  return 0;
}
