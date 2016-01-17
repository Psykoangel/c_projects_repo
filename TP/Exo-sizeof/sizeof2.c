#include <stdio.h>
#include <stdlib.h>

int main() {

  int size_char = sizeof(char);
  int size_short = sizeof(short);
  int size_int = sizeof(int);
  int size_long = sizeof(long);
  int size_float = sizeof(float);
  int size_double = sizeof(double);
  int size_lonlon = sizeof(long long);
  int size_londoubl = sizeof(long double);

  printf(" \nTaille d'une variable char : %d octet \n \n", size_char);
  printf("Taille d'une variable short : %d octets \n \n", size_short);
  printf("Taille d'une variable int : %d octets \n \n", size_int);
  printf("Taille d'une variable long : %d octets \n \n", size_long);
  printf("Taille d'une variable float : %d octets \n \n", size_float);
  printf("Taille d'une variable double : %d octets \n \n", size_double);
  printf("Taille d'une variable long long : %d octets \n \n", size_lonlon);
  printf("Taille d'une variable long double : %d octets \n \n", size_londoubl);

  return 0;
}
