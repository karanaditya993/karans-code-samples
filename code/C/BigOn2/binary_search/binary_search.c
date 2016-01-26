#include <stdio.h>

int binarySearch(int key, int array[], int min, int max);
int findMidPoint(int min, int max);

int main(void) {
    // int array[] = {0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233};
    // binarySearch(144, array, 0, 233);
  int array[] = {2, 3, 4, 10, 40};
  int n = sizeof(array)/ sizeof(array[0]);
  int x = 10;
  int result = binarySearch(x, array, 2, n-1);
  (result == -1)? printf("Element is not present in array")
               : printf("Element is present at index %d", result);
}

int binarySearch(int key, int array[], int min, int max) {

  int midpoint = findMidPoint(min, max);

  if (max >= 1) {
    if (array[midpoint] == key) return midpoint;
    if (array[midpoint] > key) return binarySearch(key, array, min, midpoint-1);
    if (array[midpoint] < key) return binarySearch(key, array, midpoint+1, max);
  }

  // if (array[midpoint] < key) {
  //   return binarySearch(key, array, midpoint+1, max);
  //
  // }
  // else if (array[midpoint] > key) {
  //   return binarySearch(key, array, min, midpoint - 1);
  // }
  // else {
  //   return midpoint;
  // }
  return -1;
}

int findMidPoint(int min, int max) {
  if (min <= max) {
    int x = (min + (max-1))/2;
    return x;
  }
  else {
    printf("naah");
    return -1;
  }
}
