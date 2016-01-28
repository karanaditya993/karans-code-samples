#include <stdio.h>
#include <cs50.h>
#include <string.h>

#include "structs.h"

#define STUDENTS 3

int main(void) {
  student students[STUDENTS];

  for (int i = 0; i < STUDENTS; i++) {
    printf("Please enter a person: ");
    students[i].name = GetString();
    printf("Please enter their dorm: ");
    students[i].dorm = GetString();
    printf("\n");
  }

  for (int i = 0; i < STUDENTS; i++) {
    printf("%s is in %s.\n", students[i].name, students[i].dorm);
  }

  // Free the memory that was allocated
  // by GetString()
  for (int i = 0; i < STUDENTS; i++){
    free(students[i].name);
    free(students[i].dorm);
  }
}
