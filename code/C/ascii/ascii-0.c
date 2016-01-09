#include <stdio.h>

// Everything under the hood of a computer is
// stored in bits, and bits in turn can be used
// to represent numbers, and numbers in turn can
// be used to represent characters (letters) using
// the conventional mapping system known as ascii:
// the american standard code for information
// interchange.
int main(void) {
  // we want to iterate over all the capital letters
  // printing out their numeric and character
  // equivalence.

  for (int i = 65; i < 65 + 26; i++) {
    printf("%i is %c\n", i, (char) i);
  }
}

// We are using casting here by casting the number
// to its character equivalent using (char) i

