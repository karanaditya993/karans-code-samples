#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, row;
    char hash = '#';
    char space = ' ';
    scanf("%d",&n);

    for (row=1; row <= n; row ++) {
        for (int j=0; j < n - row; j ++) {
            printf("%c", space);
        }
        for (int k=0; k < row; k++){
            printf("%c", hash);
        }
        printf("\n");
    }
}
