#include<stdlib.h>
#include<stdio.h>
#include<string.h>

// int a[100],i,n,low,high,key,mid,pos=-1;
// printf("Enter the number of elements ");
// scanf("%d",&n);
// printf("Enter the elements ");
// for(i=0;i<n;i++)
// {
// scanf("%d",&a[i]);
// }
// printf("Enter key elem to be searched ");
// scanf("%d",&key);
// low = 0;
// high = n - 1;
// while(low<=high)
// {
//    mid=(low+high)/2;

// if(a[mid]==key)
//    {
//     pos=mid;
//     break;
//    }
// else if(a[mid]>key)
// {
//   high=mid-1;
// }
// else{
//   low=mid+1;
// }
// }
// if(pos!=-1)
// {
//    printf("element found! in position %d",pos);
// }
// else{
//   printf("element not found");
// }
// return 0;
// scanf("%d",&elem);
// scanf("%d",&pos);
// if(pos<1 ||pos>n+1)
// {
//     printf("Invalid position\n");
// }
// else
// {
//      for(i=n-1;i>=pos-1;i--)
//      {
//         a[i+1]=a[i];
//      }
//      a[pos-1]=elem;
//      n++;
// }
// printf("The updated array is  \n");
// for(i=0;i<n;i++)
// {
//    printf("%d\t",a[i]);
// }

// scanf("%d",&pos);
// for(i=pos-1;i<n-1;i++){
//    a[i]=a[i+1];
// }
// n--;

// printf("The updated array after deletion of elem is  \n");
// for(i=0;i<n;i++)
// {
//    printf("%d\t",a[i]);
// }
// printf("Enter the element to be searched ");
//   scanf("%d",&search);
//   for(i=0;i<n-1;i++)
//   {
// if(a[i]==search)
// {
//     found=1;
//     break;
// }
//   }
//   if(found==1)
//   {
//     printf("Element found!");
//   }
//   else{
//     printf("Element not found!");
//   }

//---------Linear Search----//
// int a[100],n,i,key,found=0,pos=-1;
// printf("Enter no of elems");
// scanf("%d",&n);
// printf("Enter array elems");
//  for(i=0;i<n;i++)
//   {
//      scanf("%d",&a[i]);
//   }
// printf("Enter key elem");
// scanf("%d",&key);
//  for(i=0;i<n;i++)
//  {
//     if(a[i]==key){
//       found=1;
//       pos=i;
//       break;
//     } 
// }
// if(found==1)
// {
//   printf("Element found!! in position %d\n",pos);
// }
// else{
//   printf("element not found!!");
// }

// int  merge_sort(int a[100],int start,int end,int mid)
// {
//   int i,j,k;
//   int n1=mid-end+1;
//   int n2 = end-mid;

// int L[n1],R[n2];
//   for(i=0;i<n1;i++)
//     L[i]=a[start+i];
//     for(int j=0;j<n2;j++)
//     R[i]=a[mid+1+j];
//     i=0;
//     j=0;
//     k=start;

// while(i<n1 && j<n2)
// {
//   if(L[i]<=R[j])
//   {
//     a[k]=L[i];
//     i++;
//   }
//   else{
//       a[k]=R[j];
//       j++;
//   }
//   k++;
//   while(i<n1)
//   {
//     a[k]=L[i];
//     i++;
//     k++;
//   }
//   while(j<n2)
//   {
//     a[k]=R[i];
//     j++;
//     k++;
//   }
// } 
// }

// int main()
// {
// int a[100],n,i,start,end,mid;
// printf("Enter the number of elems");
// scanf("%d",&n);
// printf("Enter arrays elems ");
// for(i=0;i<n;i++)
// {
//   scanf("%d",&a[i]);
// }
// merge_sort(a,0,n-1,mid); 
// printf("The array elements after sorting are :");
// for(i=0;i<n;i++)
// {
//   printf("%d\t",a[i]);
// }
// return 0;
// }

//Quick sort

void swap(int *a,int *b)
{
   int temp= *a;
    *a=*b;
    *b=temp;
}

int partition(int a[],int low,int high)
{
 
 int pivot = a[high];
 int i=low-1;
  for(int j=low;j<=high;j++)
  {
    if(a[j]<pivot)
    {
      i++;
      swap(&a[i],&a[j]);
    }
  }  
  swap(&a[i+1],&a[high]);
  return i+1;
}

void quickSort(int a[],int low,int high)
{
  if(low<high)
  {
    int pi=partition(a,low,high);
     quickSort(a,low,pi-1);
     quickSort(a,pi+1,high);
  }
}
int main()
{
  int a[100],i,n;
  printf("Enter no elements: ");
   scanf("%d",&n);
  printf("Enter array elements");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   quickSort(a,0,n-1);
  printf("Then elements after sorting are:");
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
    return 0;
}
