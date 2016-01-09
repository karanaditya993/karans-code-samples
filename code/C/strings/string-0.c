#include <cs50.h>
#include <stdio.h>
#include <string.h>
// need to include string.h to have access to
// strlen function

int main(void) {
  printf("Please input a string: ");
  string s = GetString();

  for (int i = 0; i < strlen(s); i++) {
    printf("%c\n", s[i]);
  }
}

// A string is an array of chars, so this program
// allows for us to iterate over each character
// in the string using a for loop and print each
// character (index of string array) on a new line



