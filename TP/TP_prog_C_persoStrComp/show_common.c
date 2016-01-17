#include <stdlib.h>
#include <time.h>
#include <sys/types.h>

void my_putchar(char c) { write(1, &c, 1); }

void my_putstr(char *c) { write(1, c, strlen(c)); }

int my_strlen(char *str) {
  int i = 1;

  while (str[i] != '\0') {
    i = i + 1;
  }

  return (i);
}

int strcmp(char *str1, char *str2) {

  int i = 1;
  int j = 1;
  int cmp = 0;

  while (str1[i] != '\0') {
    i = i + 1;
  }

  while (str[j] != '\0') {
    j = j + 1;
  }

  if (i != j) {
    return (i - j);

  } else {
    while ((str1[cmp] == str2[cmp]) && (cmp != i)) {
      cmp = cmp + 1;

      if (cmp == i) {
        return (0);
      } else {
        return (cmp - i);
      }
    }
  }
}

int main(int argc, char **argv) {}
