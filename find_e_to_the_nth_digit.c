#include <stdio.h>
#include <math.h>

long double calculateE(int);

int main(int argc, char* argv[]) {
  int n = 0;

  printf("Enter a number of decimal places: ");
  scanf("%d", &n);
  printf("%.*Lf\n", n, calculateE(10000));

  return 0;
}

long double calculateE(int n) {
  return pow((1.0 + 1.0/n), n);
}
