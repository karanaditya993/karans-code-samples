/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */

#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // If ./generate is run without an (n) value or
    // (s) value, print program's proper usage
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // ARGV inputs are interpreted as strings,
    // so we want to make sure that the variable
    // stored as (n) is changed from a string
    // to an integer by using the atoi function
    int n = atoi(argv[1]);

    // If the [s] parameter exists (i.e. the
    // argument after the n parameter), call
    // the srand48 seed function with the s parameter
    // Else call the srand48 seed function with a
    // null pointer
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2]));
    }
    else
    {
        srand48((long int) time(NULL));
    }

    // Call drand48 function (that returns non-negative floating
    // point values uniformly distributed between 0.0 and 0.1) multiplied
    // by Limit to get numbers between 0 and LIMIT
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}