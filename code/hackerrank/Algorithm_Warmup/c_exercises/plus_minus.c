#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, x, y, z;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for (int i = 0; i < n; i++) {
      if (arr[i] > 0 ) {
        x = x + 1;
      }
      else if (arr[i] < 0) {
        y = y + 1;
      }
      else {
        z = z + 1;
      }
    }
    printf("%f\n", ((float) x / n));
    printf("%f\n", ((float) y / n));
    printf("%f\n", ((float) z / n));
    return 1;
}
