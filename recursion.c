//This file cotains of recursion related problems.
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<string.h>
// int subsetSum(int arr[100],int n)
// {
     
// }
//qsort prototype:
// void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
// //Comparision Function
// int cmp(const void *a, const void *b) {
//     return (*(int *)a - *(int *)b);
// }
// qsort(arr, n, sizeof(int), cmp);

//Combination  sum equal to the target element without reapeating sequence elements in array:
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int combination(int index,int sum,int k,int n,int arr[])
{     int res=0;
      if(sum==k)
        return 1;
      if(index==n||sum>k)
         return 0;
        //base case 
      for(int i=index;i<n;i++)
      {  
        if(i>index && arr[i]==arr[i-1])
           continue;
           res+= combination(i+1,sum+arr[i],k,n,arr);    
      }
      return res;
}

//Driver Code for combination:
int main() {
    int n = 5; // size of the array
    int arr[] = {2, 3, 5, 2, 8}; // sample array
    int k = 5; // target sum
    qsort(arr, n,sizeof(int),cmp); // sort the array to handle duplicates
    int ans = combination(0, 0, k,n, arr);
    printf("Number of combinations: %d\n", ans);
    return 0;
}

