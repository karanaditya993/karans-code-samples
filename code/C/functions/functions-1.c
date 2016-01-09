#include <cs50.h>
#include <stdio.h>

int GetPositiveInt(void);
// Implementing this function at the top so that it is accessible in main, declaring the function below main

int main(void) {
  int n = GetPositiveInt();
  printf("Thanks for the %i!\n", n);
}

int GetPositiveInt(void) {
  int n;
  do {
    printf("Please give me a positive int: ");
    n = GetInt();
    // from cs50 library
  }
  while (n < 1);
  // You must return n at the end because we need to use it in the main function when we call GetPositiveInt();
  return n;
}
// input value is void because the function is not taking anything in