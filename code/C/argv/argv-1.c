#include <cs50.h>
#include <stdio.h>

// Here we want to print out all of the arguments
// after the file_name

int main(int argc, string argv[]) {
  for (int i = 1; i < argc; i++) {
    printf("%s\n", argv[i]);
  }
}
// we need to start at i = 1 because we want to
// print out all of the arguments AFTER the
// file_name

