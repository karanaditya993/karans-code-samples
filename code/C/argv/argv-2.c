#include <cs50.h>
#include <stdio.h>
#include <string.h>

//We want to print out each individual character
// of each command line argument after the file_name
// (i.e. nested for loops!)

int main(int argc, string argv[]) {
  for (int i = 1; i < argc; i++) {
    for (int j = 0, n = strlen(argv[i]); j < n; j++){
     printf("%c\n", argv[i][j]);
    }
    printf("\n");
  }
}

