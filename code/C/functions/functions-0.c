#include <cs50.h>
#include <stdio.h>

void PrintName(string name);

int main(void) {
  printf("Your name: ");
  string s = GetString();

  PrintName(s);
  // we're calling the PrintName function here
  // PrintName needs to be implemented above because that way it will be accessible to the main function
}

void PrintName(string name) {
  printf("Hello, %s\n", name);
}
// here the input value is name of type string, the return value is void
