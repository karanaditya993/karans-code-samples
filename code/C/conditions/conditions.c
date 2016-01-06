// Since we are not using CS50's IDE (integrated development environment, make will not work on these files and instead you will need to run gcc filename -lcs50 to link the file to the CS50 library)

#include <cs50.h>
#include <stdio.h>

int main(void){
  printf("Please give me an int: ");
  int n = GetInt();

  if (n > 0) {
    printf("You picked a positive number!\n");
  }
  else if (n == 0) {
    printf("You picked zero!\n");
  }
  else {
    printf("You picked a negative number!\n");
  }
}