/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <stdio.h>
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
int findMidPoint(int min, int max);
bool binarySearch(int key, int array[], int min, int max);

bool search(int value, int values[], int n) {
  if (value < 0){
    return false;
  }
  else {
    return binarySearch(value, values, 0, n-1);
  }
}

bool binarySearch(int key, int array[], int min, int max) {
  int midpoint = findMidPoint(min, max);
  if (max >= min) {
    if (array[midpoint] == key) {
      return true;
    }
    else if (array[midpoint] > key) {
      return binarySearch(key, array, min, midpoint-1);
    }
    else if (array[midpoint] < key) {
      return binarySearch(key, array, midpoint+1, max);
    }
  }
  return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
  //Todo: implement an O(n^2) sorting algorithm
  int temp;

  // Bubble sort function
  for (int i=0; i < n; i++) {
    for (int j=0; j < n-1; j++) {
      if (values[j] > values[j+1]) {
        temp = values[j+1];
        values[j+1] = values[j];
        values[j] = temp;
      }
    }
  }
}

int findMidPoint(int min, int max) {
  if (min <= max) {
    int x = (min + max)/2;
    return x;
  }
  else {
    return -1;
  }
}
