#include <stdio.h>
#include <cs50.h>
#include <string.h>

// This works. strcmp allows for strings
// to be compared

int main(void) {
  printf("Please enter a sentence: ");
  char* s = GetString();
  printf("\n");

  printf("Please enter another sentence: ");
  char* t = GetString();
  printf("\n");

// error checking if they equal to NULL
  if (s != NULL & t!= NULL) {
    if (strcmp(s, t) == 0) {
      printf("You typed the same thing!\n");
    }
    else {
      printf("You typed different things!\n");
    }
  }
}
