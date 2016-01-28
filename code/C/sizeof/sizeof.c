#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char c;
  double d;
  float f;
  int i;
  char* s;
// On oa 32 bit system
  printf("char: %lu bytes\n", sizeof(c));
  printf("double: %lu bytes\n", sizeof(d));
  printf("float: %lu bytes\n", sizeof(f));
  printf("int: %lu bytes\n", sizeof(i));
  printf("string: %lu bytes\n", sizeof(s));
  // %i doesn't change because we want sizeof to be represented as an integer
}
