#include <stdio.h>
#include <cs50.h>

int fact(int n);

int main(int argc, string argv[]) {
  if (argc == 1) {
    printf("Usage: factorial n\n");
  }
  else {
    int n = atoi(argv[1]);
    printf("%i\n", fact(n));
  }
}

int fact(int n) {
  if (n == 1)
    return 1;
  else
    return n * fact(n-1);
}
