// Doesnt work because both the copy and the Original
// are capitalized because they are both pointing to the
// same pointer in memory

#include <stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(void) {
  printf("Say something: ");
  char* s = GetString();

  if (s == NULL) {
    return 1;
  }
  char* t = s;
  // this is copying the address of string s
  // to the value of string t

  printf("Capitalize copy...\n");
  if (strlen(t) > 0) {
    t[0] = toupper(t[0]);
  }
  printf("Original: %s\n", s);
  printf("Copy:     %s\n", t);
}
