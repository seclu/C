#include <stdio.h>
#include <math.h>

long double calculatePI(int);

int main(int argc, char* argv[]) {
  int n = 0;

  printf("Enter a number of decimal places:");
  scanf("%d", &n);
  printf("%.*Lf\n", n, calculatePI(n));

  return 0;
}

long double calculatePI(int n) {
  long double pi = 0.0;

  for (int i = 0 ; i <= n ; i++) {
    pi += ( 4.0/(8*i+1) - 2.0/(8*i+4) - 1.0/(8*i+5) - 1.0/(8*i+6) ) * pow(16, -i);
  }

  return pi;
}
