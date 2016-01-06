#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Please enter your name: ");
  string s = GetString();

  printf("Hello, %s\n", s);
}
