#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
  // Ensure one and only command line argument
  if (argc != 2) {
    printf("Usage: %s [name of document]\n", argv[0]);
    return 1;
  }

  // Open new document
  // fp is a file pointer (denoted by *)
  FILE* fp = fopen(argv[1], "r");

  // Error handling
  if (fp == NULL) {
    printf("Could not open %s\n", argv[1]);
    return 2;
  }

  // Storage space for each line of text
  char output[256];

  // Get text from user to save to file
  for (int i = 1; fgets(output, sizeof(output), fp) != NULL; i++) {
    printf("Line %02d: %s", i, output);
  }

  // Close the file
  fclose(fp);
  return 0;
}
