#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Usage: %s [name of document]\n", argv[0]);
    return 1;
  }
  // open a new document
  FILE* fp = fopen(argv[1], "w");

  // check for successfull open
  if (fp == NULL) {
    printf("Could not create %s\n", argv[1]);
    return 2;
  }

  // get text from user and save to file
  while (true) {
    // get text from user
    printf("Enter a new line of text (or \"quit\"): \n");
    string input = GetString();

    // if user wants to quit
    if (input != NULL && strcmp(input, "quit") == 0) {
      free(input);
      break;
    }
    // Add input to file
    else if (input != NULL) {
      fputs(input, fp);
      fputs("\n", fp);
      printf("CHA-CHING!\n\n");
      free(input);
    }
  }

  // close the file and end succesfully
  fclose(fp);
  return 0;
}
