// Get input from user (i.e. string) using scanf

#include <stdio.h>

int main(void)
{
  // Declare s to be an array of 16 characters
  // as opposed to an address in memory
  char s[16];
  printf("String please: ");
  scanf("%s", s);
  printf("Thanks for the %s!\n", s);
}
