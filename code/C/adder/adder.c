// Since we are not using CS50's IDE (integrated development environment, make will not work on these files and instead you will need to run gcc filename -lcs50 to link the file to the CS50 library)
#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please give me an int: ");
  int x = GetInt();
  // GetInt() is part of the cs50.h library much like GetString();

  printf("Please give me another int: ");
  int y = GetInt();
  // GetInt() is part of the cs50.h library much like GetString();

  printf("The sum of %d and %d is %d\n", x, y, x + y);
  // Notice that there needs to be three arguments specified after the printf quotation statement, because indeed there are three %d's being recognized in that statement
}


