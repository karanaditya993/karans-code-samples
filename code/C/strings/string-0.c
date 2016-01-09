#include <cs50.h>
#include <stdio.h>
#include <string.h>
// need to include string.h to have access to
// strlen function

int main(void) {
  printf("Please input a string: ");
  string s = GetString();
  // if GetString happens to return null, then we
  // do not want to try iterating over characters
  // that are not there. GetString would return null
  // if either the string were too large that it
  // wouldn't fit in memory or if the user didn't
  // type in a string at all. The following if
  // statement would fix this problem:

  if (s != NULL) {
    for (int i = 0; i < strlen(s); i++) {
      printf("%c\n", s[i]);
    }
  }
}

// A string is an array of chars, so this program
// allows for us to iterate over each character
// in the string using a for loop and print each
// character (index of string array) on a new line



