// Since we are not using CS50's IDE (integrated
// development environment, make will not work on
// these files and instead you will need to run gcc
// filename -lcs50 to link the file to the CS50
// library)

#include <cs50.h>
#include <stdio.h>

int main(void) {
  int n;
  // first declare an int called n in which to store the users integer
  // You must declare it here because we need to scope this variable both in the do and in the while loop
  do {
    printf("Please give me a positive int: ");
    n = GetInt();
    // construct a do-while loop...here what we are DOing is asking the user for a positive integer and getting the integer using CS50's GetInt()
  }
  while (n < 1);
  // While n < 1 keep prompting the do statement. Once this condition is not satisfied (i.e. n is greater than 1, move on to the code below)
  printf("Thanks for the positive int\n");
}