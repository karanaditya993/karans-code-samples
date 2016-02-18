#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool parse(const char* line, char* abs_path, char* query);
char* change(char* line);

int main() {
  char abs_path[100], query[100];
  char* p = "GET /hello.php?q=Alice HTTP/1.1\r\n\r\n";
  if (parse(p, abs_path, query)) {
    printf("SUCCESS\n");
    printf("Absolute path: %s\n", abs_path);
    printf("Query: %s\n", query);
  }
  else {
    printf("FAILURE\n");
    return 1;
  }
}

bool parse(const char* line, char* abs_path, char* query) {
  char method[20], request_target[100], HTTP_version[20], CRLF[20];

  const char question_mark = '?';
  if (line == NULL) {
    return false;
  }
  sscanf(line, "%s %s %s", method, request_target, HTTP_version);
  abs_path = strtok(request_target, &question_mark);

  if (request_target[0] != '/') {
    printf("Path must begin with '/' character\n");
    return false;
  }
  query = strtok(NULL, &question_mark);

  if (query == NULL) {
    query = "";
  }
  return true;
}
