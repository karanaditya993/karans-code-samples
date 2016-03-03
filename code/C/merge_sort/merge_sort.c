#include <stdio.h>
#include <cs50.h>


void mergeSort(int arr[], int low, int mid, int high);
void split (int arr[], int low, int high);

int main(void) {
  printf("Please enter the length of your array: ");
  int n = GetInt();
  int merge[50];
  for (int i=0; i < n; i++) {
    printf("Enter element %i: ", (i+1));
    merge[i] = GetInt();
  }
  split(merge, 0, n-1);

  for (int i=0; i<n; i++) {
    printf("%i ", merge[i]);
  }
  printf("\n");
}

void split(int arr[], int low, int high) {
  int mid;

  if (low < high) {
    mid = (low + high)/2;
    split(arr, low, mid);
    split(arr, mid+1, high);
    mergeSort(arr, low, mid, high);
  }
}

void mergeSort(int arr[], int low, int mid, int high){
  int temp[50], i, m, l;
  l = low;
  i = low;
  m = mid+1;

  while ((l <= mid) && (m <= high)) {
    if (arr[l] <= arr[m]) {
      temp[i] = arr[l];
      l++;
    }
    else {
      temp[i] = arr[m];
      m++;
    }
    i++;
  }
  if (l>mid) {
    for (int k = m; k <= high; k++) {
      temp[i] = arr[k];
      i++;
    }
  }
  else {
    for (int k=l; k <= mid; k++) {
      temp[i] = arr[k];
      i++;
    }
  }
  for (int k=low; k<=high; k++) {
    arr[k] = temp[k];
  }
}
