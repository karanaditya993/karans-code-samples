// Since we are not using CS50's IDE (integrated development environment, make will not work on these files and instead you will need to run gcc filename -lcs50 to link the file to the CS50 library)

#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please give me an int between 1 and 10: ");
  int n = GetInt();

  switch (n){
    case 1:
    case 2:
    case 3:
      printf("You picked a small int!\n");
      break;

    case 4:
    case 5:
    case 6:
    case 7:
      printf("You picked a medium int!\n");
      break;

    case 8:
    case 9:
    case 10:
      printf("You picked a large int!\n");
      break;

    default:
      printf("You picked an invalid int!\n");
      break;
  }

}