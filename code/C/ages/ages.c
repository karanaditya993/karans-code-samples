#include <cs50.h>
#include <stdio.h>
// We want to write a program that asks everyone
// in a room for their age and then tells each
// person how old they will be a year from now

int main(void) {
    int n;
    do {
      printf("Number of people in room: ");
      n = GetInt();
    }
    while (n < 1);

    //Declare an array called ages that has a
    //length equal to the number of people in the
    //room
    int ages[n];

    // First we want to get the current age
    // of each person in the room
    for (int i = 0; i < n; i++) {
      printf("Age of person #%i: ", i + 1);
      ages[i] = GetInt();
    }
    printf("Time passes...\n");
    for (int i = 0; i < n; i++) {
      printf("A year from now, person %i will be %i years old.\n", i + 1, ages[i] + 1);
    }
}