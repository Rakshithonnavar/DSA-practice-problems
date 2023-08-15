#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int find_maximum_subarray(int array[], int n, int k) {
  int i, j, max_sum = INT_MIN;
  int current_sum = 0;

  for (i = 0; i < n - k + 1; i++) {
    current_sum = 0;
    for (j = i; j < i + k; j++) {
      current_sum += array[j];
    }
    if (current_sum > max_sum) {
      max_sum = current_sum;
    }
  }

  return max_sum;
}

int main() {
  int array[] = {1,2,3,1,4,5,2,3,6};
  int n = sizeof(array) / sizeof(array[0]);
  int k = 3;

  int max_sum = find_maximum_subarray(array, n, k);

  printf("The maximum subarray sum is %d\n", max_sum);

  return 0;
}


