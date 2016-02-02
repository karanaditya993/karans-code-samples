#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int main(int argc, string argv[]) {
  if (argc == 1 || argc > 2) {
    printf("Usage: collatz n\n");
    return 1;
  }
  else {
    int m = atoi(argv[1]);
    printf("%i\n", collatz(m));
  }
}

int collatz(int n) {
  if (n == 1)
    return 0;
  else if ((n % 2) == 0)
    return 1 + collatz(n/2);
  else
    return 1 + collatz(3*n + 1);
}
