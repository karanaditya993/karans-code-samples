#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool parse(const char* line, char* abs_path, char* query);
char* change(char* line);

int main() {
  char abs_path[100], query[100];
  char* p = "GET /favicon.ico HTTP/1.1\r\n\r\n";
  if (parse(p, abs_path, query)) {
    printf("Absolute Path: %s\n", abs_path);
    printf("Query String: %s\n", query);
    return(0);
  }
  else {
    printf("Fail\n");
    return(1);
  }
}

bool parse(const char* line, char* abs_path, char* query) {
  char method[20], request_target[100], HTTP_version[20];
  char  *absolute_path, *query_string;
  const char question_mark = '?';

  if (line == NULL) {
    return false;
  }

  sscanf(line, "%s %s %s", method, request_target, HTTP_version);
  // printf("Method: %s\n", method);
  // printf("Request Target: %s\n", request_target);
  // printf("Version: %s\n", HTTP_version);

  if (request_target[0] != '/') {
    printf("501 Not Implemented\n");
    return false;
  }
  // If method is not get, respond with 404 error
  if (strcasecmp(method, "get") != 0) {
    printf("405 Method Not Allowed\n");
    return false;
  }
  // Check HTTP version
  if (strcasecmp(HTTP_version, "HTTP/1.1") != 0){
    printf("505 HTTP Version Not Supported\n");
    return false;
  }

  if (strlen(request_target) > 1) {
    absolute_path = strtok(request_target, &question_mark);
    query_string = strtok(NULL, &question_mark);
    if (query_string == NULL) {
      query_string = "";
    }
    else if (strcmp(query_string, "q") == 0) {
      printf("400 Bad Request\n");
      return false;
    }
    strcpy(abs_path, absolute_path);
    strcpy(query, query_string);
    return true;
  }
  else {
    strcpy(abs_path, "/");
    return true;
  }
}
