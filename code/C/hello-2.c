#include "hello.h"
#include <stdio.h>
#include <cs50.h>

int main(void){

  printf("Please enter a word: ");
  string s = GetString();
  printf("Your word was, %s\n", s);
}