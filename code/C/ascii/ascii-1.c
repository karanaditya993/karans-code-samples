#include <stdio.h>

int main(void) {
  for (char c = 'A'; c <= 'Z'; c++) {
    printf("%i is %c\n", (int) c, c);
  }
}

// Same program essentially as ascii-0 but this time
// we are casting the chars to ints rather than the
// ints to chars

