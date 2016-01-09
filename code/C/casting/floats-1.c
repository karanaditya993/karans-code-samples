#include <stdio.h>

int main(void) {
  float f = (float) 1 / (float) 10;
  printf("%0.1f\n", f);
}

// Casting is converting one data type to another.
// In this case we are converting the integers 1 and
// 10 to floats. In reality, we would only need to
// convert one of them because dividing a float by
// an int or an int by a float will result in a
// float in the C programming language.