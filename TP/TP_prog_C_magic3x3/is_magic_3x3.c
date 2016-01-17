/* Magic 3x3 Exercice */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#define BUFFER_SIZE 1

void my_putchar(char c) { write(1, &c, 1); }

int my_putstr(char *str) {
  int i = 0;

  while (str[i] != '\0') {
    my_putchar(str[i]);
    i = i + 1;
  }
}

int my_getnbr(char *str) {
  int res;

  res = 0;
  res = res * 10;
  res = res + str[0] - '\0';

  return (res);
}

int my_stock_in_tab(int **tab, char *argv1) {

  int x = 0;
  int y = 0;
  int nb_read;
  char buffer[BUFFER_SIZE];
  int fd;

  fd = open(argv1, O_RDWR);
  if (fd == -1) {
    my_putstr("error");

    return 0;
  }

  nb_read = read(fd, buffer, BUFFER_SIZE);
  tab[y][x] = my_getnbr(buffer);
  x = x + 1;

  while (1) {
    nb_read = read(fd, buffer, BUFFER_SIZE);

    if (y == 2 && *buffer == '\n') {
      return (**tab);

    } else if (*buffer == '\n') {
      y = y + 1;
      x = -1;

    } else {
      tab[y][x] = my_getnbr(buffer);
      x = x + 1;
    }
  }
}

int main(int argc, char **argv) {

  int i;
  int x;
  int y;
  int my_nb;
  int **tab;

  tab = malloc(sizeof(*tab) * 3);
  tab[0] = malloc(sizeof(*tab[0]) * 3);
  tab[1] = malloc(sizeof(*tab[1]) * 3);
  tab[2] = malloc(sizeof(*tab[2]) * 3);

  if (argc != 0 && argc < 2) {
    my_putchar('\n');
    return (0);
  }

  **tab = my_stock_in_tab(tab, argv[1]);
  my_nb = tab[0][0] + tab[0][1] + tab[0][2];

  if (tab[0][0] + tab[1][0] + tab[2][0] == my_nb &&
      tab[0][1] + tab[1][1] + tab[2][1] == my_nb &&
      tab[0][2] + tab[1][2] + tab[2][2] == my_nb &&
      tab[1][0] + tab[1][1] + tab[1][2] == my_nb &&
      tab[2][0] + tab[2][1] + tab[2][2] == my_nb) {
    my_putchar('\n');
    my_putchar('\n');
    my_putchar('1');
    my_putchar('\n');
    my_putchar('\n');

  } else {
    my_putchar('\n');
    my_putchar('\n');
    my_putchar('0');
    my_putchar('\n');
    my_putchar('\n');
  }
}
