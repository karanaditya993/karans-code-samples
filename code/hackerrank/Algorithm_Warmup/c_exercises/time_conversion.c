#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(void) {
  char* time = (char *)malloc(10240 * sizeof(char));
  scanf("%s",time);
  int x, i, total;
  int arr[2];

  if (time[8] == 'P') {
    arr[0] = time[0] - '0';
    arr[1] = time[1] - '0';

    if (arr[0] == 1 && arr[1] == 2) {
      for (int k = 0; k < 8; k++) {
        printf("%c", time[k]);
      }
    }
    else {
      for (int index = 0; index < 2; index++) {
        total = (total * 10) + arr[index];
      }
      char str[10];
      sprintf(str, "%i", (total + 12));
      time[0] = str[0];
      time[1] = str[1];
      for (int j = 0; j < 8; j++) {
        printf("%c", time[j]);
      }
    }
  }
  else {
    if (time[0] == '1' && time[1] == '2') {
      time[0] = '0';
      time[1] = '0';
      for (int index=0; index< 8; index++) {
        printf("%c", time[index]);
      }
    }
    else {
      for (int k = 0; k < 8; k++) {
        printf("%c", time[k]);
      }
    }
  }
  printf("\n");
}

