// Prompt user for a string and then print
// that string one character line per line

// DO NOT TREAT STRING AS AN ARRAY, USE POINTERS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int main(void) {

  // pointer to the address of the first character
  // in GetString() assigned to s
  char* s = GetString();

  if (s == NULL) {
    return 1;
  }

  for (int i = 0, n = strlen(s); i < n; i++) {
    printf("%c\n", *(s+i));
    // Go to the address at s and get that value
    // (that is what the star is doing), and do
    // that for each letter until the i increments
    // to equal the length of the string
  }
}
