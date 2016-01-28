#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Declare addresses of int x and y...aka pointers
  int* x;
  int* y;

  // Allocate enough memory to store an int
  // and store the address of that memory in x
  x = malloc(sizeof(int));

  // Go to the address of x and store the value
  // 42 in it
  *x = 42;
  // Go to the address of y and store the value
  // of 42 in it. The problem is we do not have
  // memory allocated for y, therefore we must
  // set up y to have the same pointee as *x
  // y = x;
  *y = 13;
  printf("x: %d, y: %d", *x, *y);
  printf("\n");
}
