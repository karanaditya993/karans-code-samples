#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char weekday[20], month[20], dtm[100], day[20], year[20];
  char* p = "GET /hello.php?q=Alice HTTP/1.1 CTRF";
  // strcpy(dtm, "GET /hello.php?q=Alice HTTP/1.1 CTRF");
  sscanf(p, "%s %s %s %s", weekday, month, day, year);

  printf("Method: %s\n", weekday);
  printf("Request Target: %s\n", month);
  printf("HTTP Version: %s\n", day);
  printf("CRLF: %s\n", year);
}
