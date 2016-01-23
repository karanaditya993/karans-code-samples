// // psuedocode:
// // Repeat until no unsorted elements remain:
// // Search the unsorted part of the data to find the
// // smallest value
// // Swap the smallest found value with the first
// // element of the unsorted part. Label everything to
// // left as sorted
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
  printf("Please enter the length of your array: ");
  int n = GetInt();
  int temp, arr[n];
  int index_of_min;

  for (int i=0; i < n; i++) {
    printf("Enter element %i: ", (i+1));
    arr[i] = GetInt();
  }

  for (int x = 0; x < n; x++) {
    index_of_min = x;
    // find index of smallest element
    for (int y = x; y < n; y++) {
      if (arr[index_of_min] > arr[y]) {
        index_of_min = y;
      }
    }
    temp = arr[x];
    arr[x] = arr[index_of_min];
    arr[index_of_min] = temp;
  }

  for (int i=0; i < n; i++) {
    printf("%i ", arr[i]);
  }
  printf("\n");
}