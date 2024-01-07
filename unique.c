#include<stdio.h>
#include<stdlib.h>

// void swap(int *a,int *b)
// {
//     int temp =*a;
//     *a=*b;
//     *b=temp;
// }
// void sort(int a[],int n)
// {
//     int i,j;
//     for(i=0;i<n;i++){
//       for(j=i;j<n-i-1;j++){
//         if(a[j]>a[j+1])
//         {
//             swap(&a[j],&a[j+1]);
//         }
//       }
//     }
// }
// void print_distinct(int a[],int n)
// {
    
//     sort(a,n);
//     int i;
//      for(i=0;i<n;i++)
//      {
//         while(i<n-1 && a[i]==a[i+1]){
//         i++;
//      }
//      printf("%d\n",a[i]);
//      }
// }     

// int main()
// {
//     int a[100],i,n;
//     printf("Enter the array size");
//     scanf("%d",&n);
//     printf("Enter array elements:");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("The distinct numbers are:\n");
//     print_distinct(a,n);
//     return 0;
// }

//Largest Subarry with sum equal to 0:
// int max(int a,int b)
// {
//      return (a>b)? a:b;
// }
// int subarray(int a[100],int n){
//   int store[100];
//   int sum=0,max=0;
//   int end=-1;
//     for(int i=0;i<n;i++)
//     {
//          sum+=a[i];
//            if(sum==0)
//            {
//              max=i+1;
//              end=i;
//            }
//            else
//            {
//             if(store[sum])
//             {
//              max = max(max,i-store[sum]);  
//             }
//             else{
//                store[sum] =i+1;
//             }
//         }
//     }
//     return max;
// }

int main()
{
    int a[100],i,n;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The distinct numbers are:\n");
    print_distinct(a,n);
    return 0;
}
