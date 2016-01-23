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
  int temp, arr[n];
  int x;
  for (int i=0; i < n; i++) {
    printf("Enter element %i: ", (i+1));
    arr[i] = GetInt();
  }

  for (int c=1 ; c <= n-1; c++) {
      x = c;
      while ( x > 0 && arr[x] < arr[x-1]) {
        temp = arr[x];
        arr[x] = arr[x-1];
        arr[x-1] = temp;
        x--;
      }
    }
  for (int i=0; i < n; i++) {
    printf("%i ", arr[i]);
  }
  printf("\n");
}
