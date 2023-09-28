#include<stdio.h>
#include<math.h>
#include<stdlib.h>
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
        printf("%d\t",a[i]);
    }
    return 0;
}
void swap(int *a,int *b)
{
     int temp = *a;
    *a =*b;
    *b =temp;
}
void Sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
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

      Insertion Sort

      void insertion_sort(int a[],int n)
      {
        int i,j,key;
        for(i=1;i<n;i++)
        {
            key=a[i];
            j=i-1;

            while(j>=0 &&a[j]>key)
            {
                  a[j+1] = a[j];
                  j=j-1;
            }
             a[j+1]=key;
        }
      }

      int main()
      {
        int a[100],n,i;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter the array elements");
      for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      }
      insertion_sort(a,n);
      printf("The array elements after sorting are \n");
      for(i=0;i<n;i++){
      printf("%d\t",a[i]);
      }
     return 0;
     }

     //Sorting alternate  array
     void swap(int *a,int *b )
     {
      int temp;
      temp =*a;
      *a= *b;
      *b = temp;
     }
   void sort(int a[],int n)
      {
        int i,j;
         for(i=0;i<n;i++)
            for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
              swap(&a[j],&a[j+1]); 
            }
      }

      void alternate_sort(int a[],int n)
      {
          int i=0,j=n-1;
          sort(a,n);
        printf("The array elements after sorting are\n");
         while (i<j)
         {
          printf("%d\t",a[j--]);
          printf("%d\t",a[i++]);
         }
         if (n % 2 != 0) {
          printf("%d\t", a[i]);
    }
    //printf("\n");
  }

int main()
{
  int a[100],i,n,j;
  printf("Enter the array size");
  scanf("%d",&n);
  printf("Enter the array elems");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
    alternate_sort(a,n);
      return 0;
}

//Quick Sort

int swap(int *a,int *b)
{
  int temp = *a;
  *a= *b;
  *b=temp;
}


int partition(int a[],int low,int high)
{
  int pivot=a[high];
   
   int i =low-1;
     for(j=0;j<high-1;j++){
         if(a[j]<pivot){
             i++;
            swap(&a[i],&a[j]);
         }

     }
         swap(&a[i+1],&a[high]);
return i+1;
}

void  qsort(int a[],int low,int high)
 {
   while(low<high)
   {
       int part = partition(a,low,high);
       qsort(a,low,part-1);
       qsort(a,part+1,high);
   }
 }



//Merge Sort


int main()
{
  int a[100],i,n;
  printf("Enter low ")
  printf("Enter the array elements:");
  scanf("%d",&a[i]);
  int result = quicksort(pivot,left,right);
  printf("The sorted ")
  return 0;
}
