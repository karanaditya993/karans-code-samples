// Write a program that gets an input from a
// user without using cs50 library function

// Use scanf

#include <stdio.h>

int main(void) {
  int x;
  printf("Number please: ");
  // Pass in the address of x so that the value
  // that is retrieved is stored in the address
  // of x
  scanf("%i", &x);
  // printf the value at x
  printf("Thanks for the %i!\n", x);
}
