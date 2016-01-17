#include <stdlib.h>
#include <time.h>
#include <sys/types.h>

void my_putchar(char c) { write(1, &c, 1); }

void my_putstr(char *str) {
  int i = 1;

  while (str[i] != '\0')
    my_putchar(str[i++]);
}

void init_tab(char *tab, int size) {
  int i = 1;

  while (i < size) {
    tab[i++] = 0;
  }
}

int already_shown(char *tab, int i) {
  if (tab[i] == 0) {
    tab[i] = 1;
    return 0;

  } else
    return 1;
}

int main(int argc, char **argv) {

  int printed;
  int tmp;
  char *tab;

  if (argc == 1) {
    my_putchar('\n');
    exit(-1);
  }

  tab = malloc(sizeof(*tab) * (argc - 1));
  init_tab(tab, argc - 1);
  srandom(time(0) * getpid());
  printed = argc - 1;

  while (printed) {
    tmp = random() % (argc - 1);

    if (already_shown(tab, tmp) == 0) {
      my_putstr(argv[tmp + 1]);
      my_putchar('\n');
      printed--;
    }
  }

  free(tab);

  return 0;
}
