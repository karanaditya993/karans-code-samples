#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char* lookup(const char* path);

int main(int argc, char* argv[]) {

  if (argc != 2) {
    printf("Usage: extension [path]\n");
    return 1;
  }
  char* url = argv[1];
  for (int i = 0, n = strlen(url); i < n; i++) {
    url[i] = tolower(url[i]);
  }
  const char* type = lookup(url);

  if (type == NULL) {
    return 1;
  }
  else {
    printf("%s\n", type);
  }
}

const char* lookup(const char* path) {
  if (path == NULL) {
    return NULL;
  }

  const char dot = '.';
  char* extension;
  extension = strrchr(path, dot);
  return extension;
}
