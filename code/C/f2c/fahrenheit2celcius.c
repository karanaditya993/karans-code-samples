// Since we are not using CS50's IDE (integrated development environment, make will not work on these files and instead you will need to run gcc filename -lcs50 to link the file to the CS50 library)

#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please enter a temperature in F: ");
  float f = GetFloat();
  // Another function built into the CS50 library

  float c = 5.0 / 9.0 * (f - 32.0);
  // when working with floats, make sure that all digits are floating point values in mathematical equations

  printf("%.1f degrees fahrenheit is %.1f degrees celcius\n", f, c);
  // the 0.1 after the % says hey I want my answer to be rounded to the nearest first decimal place
}

