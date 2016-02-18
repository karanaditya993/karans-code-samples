// This exercise does work because we are using pointers
// We have addresses of integers and are
// taking what's at those addresses and swapping them
#include <stdio.h>

void swap(int* a, int* b);

int main(void) {
  int x = 1;
  int y = 2;

  printf("x is %i\n", x);
  printf("y is %i\n", y);
  printf("Swapping....\n");
  // pass in address of x and y
  swap(&x, &y);
  printf("Swapped!\n");
  printf("x is %i\n", x);
  printf("y is %i\n", y);
}

void swap(int* x, int* y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}
