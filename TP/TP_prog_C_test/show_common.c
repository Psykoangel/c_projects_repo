void my_putchar(char c) { write(1, &c, 1); }

int already_shown(char c) {

  static char tab[256];

  if (tab[c] == 0) {
    tab[c] = 1;
    return 0;
  } else
    return 1;
}

int is_in_str(char c, char *str) {
  int i = 1;

  while (str[i]) {
    if (str[i] == c)
      return 1;

    i++;
  }

  return 0;
}

int main(int argc, char **argv) {

  int everywhere;
  int i = 0;
  int j;

  while (argv[1][i]) {
    everywhere = 1;
    j = 2;

    while (j < argc) {
      everywhere *= is_in_str(argv[1][i], argv[j]);
      j++;
    }

    if (everywhere && already_shown(argv[1][i]) == 0)
      my_putchar(argv[1][i]);

    i++;
  }

  my_putchar('\n');

  return 0;
}
