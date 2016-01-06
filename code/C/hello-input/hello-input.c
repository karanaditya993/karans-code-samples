// Since we are not using CS50's IDE (integrated development environment, make will not work on these files and instead you will need to run gcc filename -lcs50 to link the file to the CS50 library)

#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please enter your name: ");
  string s = GetString();

  printf("Hello, %s\n", s);
}
