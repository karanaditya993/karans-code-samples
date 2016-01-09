#include <cs50.h>
#include <stdio.h>
#include <string.h>

// We're going to be changing the for loop because
// it is a waste of memory (space) to continuously
// check the length of the string using strlen in
// the for loops condition considering the length
// of the string does not change.
// Therefore, we declare the variable "n" inside the
// for loops initialization alongside "i" so that in
// each iteration of the loop we will be checking i
// against the variable n as opposed to continuously
// checking the length of the string

int main(void) {
  printf("Please input a string: ");
  string s = GetString();

  if (s != NULL) {
    for (int i = 0, n = strlen(s); i < n; i++) {
      printf("%c\n", s[i]);
    }
  }

}



