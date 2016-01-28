// using pointer arithmetic
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

  char* t = malloc((strlen(s) +1) * sizeof(char));
  // malloc = memory allocation
  // strlen(s) means give me the string length of
  // s
  // we're adding 1 (+1) because we are including the
  // zero delimiter and need space for it
  // sizeof(char) is just multiplying by 1 byte

  if (t == NULL) {
    return 1;
  }
  // copy the material in s to the malloc t string
  for (int i = 0, n = strlen(s); i <= n; i++) {
    // pointer arithmetic
    *(t + i) = *(s + i);
  }
  // capitalize the first letter of the t string
  printf("Capitalizing copy...\n");
  if (strlen(t) > 0) {
    t[0] = toupper(t[0]);
  }

  printf("Original: %s\n", s);
  printf("Copy:     %s\n", t);
}
