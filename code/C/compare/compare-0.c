#include <stdio.h>
#include <cs50.h>

// This won't work if you type the
// two same strings because strings are being stored
// in different memory slots in the program so they
// are not comparable

int main(void) {
  printf("Please enter a sentence: ");
  char* s = GetString();
  printf("\n");

  printf("Please enter another sentence: ");
  char* t = GetString();
  printf("\n");

  if ( s == t ) {
    // This if statement compares s and t's
    // place in memory rather than character
    // value therefore they are not equal
    printf("You typed the same thing!\n");
  }
  else {
    printf("You typed different things!\n");
  }
}
