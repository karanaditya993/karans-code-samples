#include <cs50.h>
#include <stdio.h>

#include "structs.h"
// constants
#define NUMBER_OF_NODES 4


// This is a node
int main(void) {
  printf("Please enter size of list: ");
  int n = GetInt();
  printf("\n");
  node nodes[NUMBER_OF_NODES];

  // Make sure first value of array is a node
  // with a value
  printf("Please enter node #1: ");
  int m = GetInt();
  for (int i = 0; i < 1; i++) {
    nodes[i].value = m;
  }
  printf("\n");

  // Make sure every node thereafter has a value of
  // the succeeding node
  for (int i = 1; i < n; i++) {
    printf("Please enter node #%i: ", (i+1));
    nodes[i].value = nodes[i-1];
  }
  printf("\n");

  for (int i = 0; i < n; i++) {
    printf("%i, ", nodes[i].value);
  }
  printf("\n");
}
