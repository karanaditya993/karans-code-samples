/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    // return false;
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