#include <stdio.h>
#include <string.h>

const char* lookup(const char* path);

int main(int argc, char* argv[]) {

  if (argc != 2) {
    printf("Usage: ./file_extension-1 [extension]\n");
    return 1;
  }

  char* extension = argv[1];
  const char* type = lookup(extension);

  if (type == NULL) {
    printf("NULL\n");
    return 1;
  }
  printf("%s\n", type);
}

const char* lookup(const char* path) {
  int index = -1;
  const char* extensions[] = {".css", ".html", ".gif", ".ico", ".jpg", ".js", ".php", ".png"};
  const char* types[] = {"text/css", "text/html", "image/gif", "image/x-icon", "image/jpeg", "text/javascript", "text/x-php", "image/png"};
  const char dot = '.';
  char* absolute_path;

  absolute_path = strchr(path, dot);

  for (int i = 0; i < 8; i++) {
    if(strcasecmp(absolute_path, extensions[i]) == 0) {
      index = i;
    }
  }
  if (index == -1) {
    return NULL;
  }
  else {
    return types[index];
  }
}
