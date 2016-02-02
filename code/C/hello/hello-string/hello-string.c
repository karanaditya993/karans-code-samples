// Since we are not using CS50's IDE (integrated development environment, make will not work on these files and instead you will need to run gcc filename -lcs50 to link the file to the CS50 library)

// #include <cs50.h>
// // cs50.h is a library that includes booleans, strings, integers that C doesn't normally have
#include <stdio.h>

int main(void){
  // string s = "Karan";
  // strings don't exist in C. But when you think about it, strings are actually just an array of character values. Below is how you would declare a "String" in C
  char string[] = "Karan";
  printf("hello, %s\n", string);
}

// However, cs50 has graciously provided us with a library that declares strings for us...so if you just add #include <cs50.h> to the top, the following code would run the same way:
// int main(void){
  // string s = "Karan";
  // printf("hello, %s\n", s)
// }
