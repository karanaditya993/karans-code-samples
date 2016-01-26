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
bool search(int value, int values[], int n)
{
    //Todo: implement a searching algorithm
    if (n < 0) {
        return false;
    }
    for (int i=0; i < n; i++) {
        if (values[i] == value) {
            return true;
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
  for (int i=0; i < n; i++) {
    printf("%i ", values[i]);
  }
}
