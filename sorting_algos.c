#include<stdio.h>
//#include<stdlib.h>
void swap(int *a, int *b);
void Sort(int a[], int n);
void wave_sort(int a[], int n);

int main()
{
    int a[100],n,i;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter the array elements");
      for(i=0;i<n;i++){
    scanf("%d",&a[i]);
      }
    wave_sort(a,n);
    printf("The array after performing Wave sort operation is:");
    for(i=0;i<n;i++){
    printf("%d\t",&a[i]);
    }
}
void Sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
}

void swap(int *a,int *b)
{
     int temp = *a;
    *a =*b;
    *b =temp;
}
void wave_sort(int a[],int n)
{
    Sort(a,n);

    for(int i=0;i<n-1;i+=2)
    {
        swap(&a[i], &a[i+1]);
    }  
    return 0;
}

//  #include <stdio.h>

// void swap(int *a, int *b);
// void Sort(int a[], int n);
// void wave_sort(int a[], int n);

// int main() {
//     int a[100], n, i;

//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     printf("Enter the array elements:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     wave_sort(a, n);

//     printf("The array after performing Wave sort operation is:\n");
//     for (i = 0; i < n; i++) {
//         printf("%d\t", a[i]);
//     }

//     return 0;
// }

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void Sort(int a[], int n) {
//     int i, j;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (a[j] > a[j + 1]) {
//                 swap(&a[j], &a[j + 1]);
//             }
//         }
//     }
// }

// void wave_sort(int a[], int n) {
//     Sort(a, n);

//     for (int i = 0; i < n - 1; i += 2) {
//         swap(&a[i], &a[i + 1]);
//     }
// }
