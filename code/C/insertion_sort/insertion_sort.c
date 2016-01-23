#include <stdio.h>
#include <cs50.h>

//Psuedocode:
// Call first element sorted
// Repeat until all elements are sorted
  // Look at next unsorted element
  // Insert element into sorted portion by shifting
  // the requisite number of elements

int main(void) {
  printf("Please enter the length of your array: ");
  int n = GetInt();
  int temp, arr[n], index;
  for (int i=0; i < n; i++) {
    printf("Enter element %i: ", (i+1));
    arr[i] = GetInt();
  }

  for (int x=0 ; x < n; x++) {
      index = x;
      while ( index > 0 && arr[index] < arr[index-1]) {
        temp = arr[index];
        arr[index] = arr[index-1];
        arr[index-1] = temp;
        index--;
      }
    }
  for (int i=0; i < n; i++) {
    printf("%i ", arr[i]);
  }
  printf("\n");
}
