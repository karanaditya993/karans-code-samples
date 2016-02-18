#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define LimitRequestLine 8190

bool parse(const char* line);

int main(int argc, char* argv[]) {
  // char abs_path[LimitRequestLine + 1];
  // char query[LimitRequestLine + 1];
  if (argc < 2) {
    printf("Usage: ./parse-0 [method request_target HTTP_version CRLF]\n");
    return 1;
  }
  char* request_line = argv[];
  if (parse(request_line)) {
    return 0;
  }
  else {
    printf("ERROR\n");
    return 1;
  }
  // if (parse(line, abs_path, query)) {
  //   printf("abs_path: %s\n", abs_path);
  //   printf("query: %s\n", query);
  // }
  // else {
  //   printf("Error in parsing the file\n");
  //   return 1;
  // }
}

bool parse(const char* line){
  char method[20], request_target[LimitRequestLine], HTTP_version[20], CRLF[20];

  if (line == NULL) {
    return false;
  }
  else {
    sscanf(line, "%s %s %s %s", method, request_target, HTTP_version, CRLF);
    printf("Method: %s\n", method);
    printf("Request Target: %s\n", request_target);
    printf("HTTP Version: %s\n", method);
    printf("CRLF: %s\n", method);
    return true;
  }
}
