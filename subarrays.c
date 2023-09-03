#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int  contigious_array(int a[],int n)
{
  int max_so_far=INT_MIN,max_ending_here=0;
  for(int i=0;i<n;i++)
  {
     max_ending_here = max_ending_here+a[i];
          if(max_ending_here>max_so_far)
           max_so_far = max_ending_here ;
  }
       if(max_ending_here<0)
           max_ending_here=0;
    printf("The contigious sum of arrays:",max_so_far);
}

int main()
{
  int a[100],n,i,max_so_far;
  printf("Enter the array size:");
  scanf("%d",&n);
  printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    int max_sum = contigious_array(a,n);
        return 0;
}

// int find_maximum_subarray(int array[], int n, int k) {
//   int i, j, max_sum = INT_MIN;
//   int current_sum = 0;

//   for (i = 0; i < n - k + 1; i++) {
//     current_sum = 0;
//     for (j = i; j < i + k; j++) {
//       current_sum += array[j];
//     }
//     if (current_sum > max_sum) {
//       max_sum = current_sum;
//     }
//   }

//   return max_sum;
// }

// int main() {
//   int array[] = {-2,-3,4,-1,-2,1,5,-3};
//   int n = sizeof(array) / sizeof(array[0]);
//   int k = 5;

//   int max_sum = find_maximum_subarray(array, n, k);

//   printf("The maximum subarray sum is %d\n", max_sum);

//   return 0;
// }
