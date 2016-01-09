#include <cs50.h>
#include <stdio.h>

// The purpose of this program is to introduce
// input arguments that will be used in the
// commandline, i.e. argv. We will need to
// switch out void and introduce argc and argv.
// This program serves to print out the first
// argument that the user has typed after
// ./"file_name"


int main(int argc, string argv[]) {
  // argc is the argument count, i.e. the total
  // number of words that the user has inputed in
  // his/her prompt
  // argv is an argument vector (array) storing
  // the number of words that the user has typed
  // in his/her prompt
  printf("%s\n", argv[1]);
  // argv[0] is ./"file_name" so we want argv[1]
}

