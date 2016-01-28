#include <stdio.h>

int swap(int a, int b);

int main(void) {
  int x = 1;
  int y = 2;

  printf("x is %i\n", x);
  printf("y is %i\n", y);
  printf("Swapping....\n");
  swap(x, y);
  printf("Swapped!\n");
  printf("x is %i\n", x);
  printf("y is %i\n", y);
}

int swap(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
  return a;
  return b;
}
