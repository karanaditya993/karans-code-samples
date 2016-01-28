#include <cs50.h>
#include <stdio.h>
// With recursion

int sigma(int m);

int main(void) {
  int n;
  do {
    printf("Positive integer please: ");
    n = GetInt();
  }
  while (n < 1);

  int answer = sigma(n);

  printf("%i\n", answer);
}

int sigma(int m) {
  int sum = 0;
  for (int i = m; i > 0; i--) {
    sum += i;
  }
  return sum;
}
