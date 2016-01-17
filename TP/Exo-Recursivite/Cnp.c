int Cnp(int n, int p) {
  if ((n == p) || (p == 0))
    return 1;
  else
    return (Cnp(n - 1, p - 1) + Cnp(n - 1, p));
}

main() {
  printf("%d \n", Cnp(4, 3));

  system("PAUSE");

  return 0;
}
