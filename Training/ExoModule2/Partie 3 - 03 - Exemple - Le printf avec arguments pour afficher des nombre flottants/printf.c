/***********************************************************/
/* Programme printf.c                                      */
/*---------------------------------------------------------*/
/* Exemple de la partie 3 du module 2                      */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  printf("\n\n");
  printf("1. Ecriture simple des nombres flottants :\n");
  printf("------------------------------------------\n\n");

  printf("%%f -> %f \n", 12.34);
  printf("%%e -> %e \n", 12.34);
  printf("%%E -> %E \n", 12.34);
  printf("%%g -> %g \n", 12.34);
  printf("%%G -> %G \n", 12.34);
  printf("%%g -> %g \n", 0.123456);
  printf("%%G -> %G \n", 0.123456);

  printf("\n\n");
  printf("2. Specification de la taille minimale avec %%f :\n");
  printf("-------------------------------------------------\n\n");

  printf("%%12f -> %12f \n", 12.3456);
  printf("%%10f -> %10f \n", 12.3456);
  printf("%%8f  -> %8f \n", 12.3456);
  printf("%%6f  -> %6f \n", 12.3456);
  printf("%%4f  -> %4f \n", 12.3456);
  printf("%%2f  -> %2f \n", 12.3456);

  printf("\n\n");
  printf("3. Specification de la precision avec %%f :\n");
  printf("-------------------------------------------\n\n");

  printf("%%.12f -> %.12f \n", 12.34567);
  printf("%%.10f -> %.10f \n", 12.34567);
  printf("%%.8f  -> %.8f \n", 12.34567);
  printf("%%.6f  -> %.6f \n", 12.34567);
  printf("%%.4f  -> %.4f \n", 12.34567);
  printf("%%.2f  -> %.2f \n", 12.34567);

  printf("\n\n");
  printf("4. Specification de la taille minimale avec %%e :\n");
  printf("-------------------------------------------------\n\n");

  printf("%%12e -> %.12e \n", 1234567890.0);
  printf("%%10e -> %.10e \n", 1234567890.0);
  printf("%%8e  -> %.8e \n", 1234567890.0);
  printf("%%6e  -> %.6e \n", 1234567890.0);
  printf("%%4e  -> %.4e \n", 1234567890.0);
  printf("%%2e  -> %.2e \n", 1234567890.0);

  printf("\n\n");
  printf("5. Specification de la precision avec %%e :\n");
  printf("-------------------------------------------\n\n");

  printf("%%.12e -> %.12e \n", 1234567890.0);
  printf("%%.10e -> %.10e \n", 1234567890.0);
  printf("%%.8e  -> %.8e \n", 1234567890.0);
  printf("%%.6e  -> %.6e \n", 1234567890.0);
  printf("%%.4e  -> %.4e \n", 1234567890.0);
  printf("%%.2e  -> %.2e \n", 1234567890.0);

  printf("\n\n");
  printf("4. Specification de la taille minimale avec %%g :\n");
  printf("-------------------------------------------------\n\n");

  printf("%%12g -> %12g \n", 1234567890.0);
  printf("%%10g -> %10g \n", 1234567890.0);
  printf("%%8g  -> %8g \n", 1234567890.0);
  printf("%%6g  -> %6g \n", 1234567890.0);
  printf("%%4g  -> %4g \n", 1234567890.0);
  printf("%%2g  -> %2g \n", 1234567890.0);

  printf("\n\n");
  printf("5. Specification de la precision avec %%g :\n");
  printf("-------------------------------------------\n\n");

  printf("%%.12g -> %.12g \n", 1234567890.0);
  printf("%%.10g -> %.10g \n", 1234567890.0);
  printf("%%.8g  -> %.8g \n", 1234567890.0);
  printf("%%.6g  -> %.6g \n", 1234567890.0);
  printf("%%.4g  -> %.4g \n", 1234567890.0);
  printf("%%.2g  -> %.2g \n", 1234567890.0);

  printf("\n\n");

  system("PAUSE");

  return 0;
}
