#include <stdio.h>
#include <cs50.h>

//Psuedocode:
// Set swap counter to a non-zero value
// Repeat until the swap counter is 0
  // Reset swap counter to 0
  // Look at each adjacent pair
    // If two adjacent elements are not in order,
    // swap them and add one to the swap counter

int main(void) {
  printf("Please enter the length of your array: ");
  int n = GetInt();
  int temp, arr[n];
  // int index_of_min;

  for (int i=0; i < n; i++) {
    printf("Enter element %i: ", (i+1));
    arr[i] = GetInt();
  }
  for (int x=0; x < n; x++) {
    for (int y=0; y < n-1; y++) {
      if (arr[y] > arr[y+1]) {
        temp = arr[y+1];
        arr[y+1] = arr[y];
        arr[y] = temp;
      }
    }
  }
  for (int i=0; i < n; i++) {
    printf("%i ", arr[i]);
  }
  printf("\n");
}
