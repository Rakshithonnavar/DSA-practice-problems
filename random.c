#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>

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

//insertion Sort
// void swap(int *a,int *b)
// {
//  int temp= *a;
//  *a=*b;
//  *b=temp;
// }

// int bubble_sort(int a[100],int n)
// {
//   for(int i=0;i<n;i++)
//   {
//     for(int j=0;j<n-i-1;j++)
//     {
//       if(a[j]>a[j+1])
//       {
//         swap(&a[j],&a[j+1]);
//       }
//     }
// }
// }

//selection sort alogorithm
// void swap(int *a,int *b)
// {
//   int temp= *a;
//    *a=*b;
//    *b=temp;
// }

// int selection_sort(int a[100],int n)
// {
//  int i,j;
//  for(i=0;i<n-1;i++)
//  {
//   int min_index=i;
//     for( j=i+1;j<n;j++)
//     {
//       if(a[j]<a[min_index])
//       {
//         min_index=j;
//       }
//     }
//     swap(&a[i],&a[min_index]);
//  }  
// }
// int main()
// {
//   int a[100],n,i,j;
//   printf("Enter the no of elems");
//   scanf("%d",&n);
//   printf("Enter the elements");
//    for(i=0;i<n;i++)
//    {
//     scanf("%d",&a[i]);
//    }
//    selection_sort(a,n);
//    printf("\nThe sorted elements are:\n");
//    for(i=0;i<n;i++)
//    {
//     printf("%d ",a[i]);
//    }
// return 0;
// }

//********Pattren printing******?
// int main()
// {
// int n;
// printf("****Printing pattern***\n");
// printf("Enter the count!");
//  scanf("%d",&n);
//   for(int i=1;i<=n;i++)
//   {
//     for(int j=1;j<=i;j++)
//     { 
//        printf(" ");
//     }
//     for(int k=1;k<=n;k++)
// {
//       printf("*");
// }
//  printf("\n");
// }
//   return 0;
// }

  //Largest and smmalest elements in array
// int  large(int a[100],int n)
// {
//   int large=a[0];
//   for(int i=0;i<n;i++ ){
//      if(a[i]>large)
//        large= a[i];
//   }
//   return large;
// }
// int small(int a[100],int n)
// {
//   int small=a[0];
//      for(int i=0;i<n;i++){
//         if(a[i]<small)
//           small=a[i];
//      }
//      return small;
// }
// void swap(int *a,int *b)
// {
//   int temp= *a;
//    *a=*b;
//    *b=temp;
// }

// int bubble_sort(int a[100],int n)
// {
//   for(int i=0;i<n;i++)
//   {
//     for(int j=0;j<n-i-1;j++)
//     {
//       if(a[j]>a[j+1])
//       {
//         swap(&a[j],&a[j+1]);
//       }
//     }
// }
// }
// int distinct(int a[100],int n)
// {
//     if(n==0)
//        return 0;
// int distinct[1000];
//  int count =0;
//  distinct[count++]=a[0];
//     for(int i=1;i<n;i++){
//           if(a[i]!=a[i-1])
//           {
//             distinct[count++]=a[i];
//           }
//     }
//     return count;
// }  
// int main()
// {
//   int a[100],n,i,j;
//   printf("Enter the no of elems");
//   scanf("%d",&n);
//   printf("enter elements");
//    for(i=0;i<n;i++)
//    {
//     scanf("%d",&a[i]);
//    }
//   int result = distinct(a,n);
//   printf("The elements are :");
//      for(i=0;i<result;i++ )
//      {
//       printf("%d\t",a[i]);
//      }
//     return 0;
// }




// int distinct(int a[100],int n)
// {
//     if(n==0)
//        return 0;
//  int distinct[1000];
//  int count =0;
//  distinct[count++]=a[0];
//     for(int i=1;i<n;i++){
//           if(a[i]!=a[i-1])
//           {
//             distinct[count++]=a[i];
//           }
//     }
//     return count;
// }  
// int main()
// {
//  int a[100],n,i,j;
//  printf("Enter the no of elems: ");
//  scanf("%d",&n);
//  printf("Enter elements: ");
//    for(i=0;i<n;i++)
//    {
//     scanf("%d",&a[i]);
//    }
//  int result = distinct(a,n);
//     int dist[result];
//     for(i=0;i<result;i++)
//     {
//       dist[i]=a[i];
//     }
//  printf("The elements are :");
//      for(i=0;i<result;i++ )
//      {
//       printf("%d\t",dist[i]);
//      }
//     return 0;
// }




// int distinct(int a[100], int n) {
//     if (n == 0)
//         return 0;

//     int distinct[1000];
//     int count = 0;
//     distinct[count++] = a[0];

//     for (int i = 1; i < n; i++) {
//         if (a[i] != a[i - 1]) {
//             distinct[count++] = a[i];
//         }
//     }

//     return count;
// }

// int main() {
//     int a[100], n, i, j;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements: ");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     int result = distinct(a, n);
//     int dist[result];  // Declare dist array with the correct size

//     for (i = 0; i < result; i++) {
//         dist[i] = a[i];
//     }

//     printf("The distinct elements are: ");
//     for (i = 0; i < result; i++) {
//         printf("%d\t", dist[i]);
//     }

//     return 0;
// }
  //count of distinct elements in array 
// int main()
// {
//     int a[100],i,n,j,count=0;
//     printf("Enter the no of elements");
//     scanf("%d",&n);
//     printf("Enter array elements:\n");
//      for(i=0;i<n;i++)
//      {
//         scanf("%d",&a[i]);
//      }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 break;
//             }
//         }
//         if(i==j)
//           count++;
//     }
//     printf("The no distinct elements in array are %d\t",count);
//     return 0;
// }

//Largest and smallest element in array

// void swap(int *a,int *b)
// {
//      int temp = *a;
//      *a=*b;
//      *b=temp;
// }
// int bubble_sort(int a[100],int n)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if(a[j]>a[j+1])
//             swap(&a[j],&a[j+1]);
//         }
//     }
//     return a[0];
// }

  // int main()
  // {
  //   int a[100],n,i,j;
  //   printf("Enter the no of elements:");
  //    scanf("%d",&n);
  //    printf("Enter the array:");
  //     for(i=0;i<n;i++)
  //     {
  //        scanf("%d",&a[i]);
  //      }
  //    bubble_sort(a,n);
  //   int min=a[0];
  //   int max=a[n-1];
  //   printf("\nMinimum value is: %d \nMaximum Value is :%d ",min,max);
  //      return 0;
  // }
  

  //Alternate sort
//   void swap(int *a,int *b)
//   {
//     int temp = *a;
//      *a=*b;
//      *b=temp;
//   }
// void sort(int *a,int n)
// {
//   for(int i=0;i<n;i++)
//   {
//      for(int j=0;j<n-i-1;j++)
//      {
//        if(a[j]>a[j+1])
//           swap(&a[j],&a[j+1]);
//      }
//   }
// }

// int alternate_sort(int a[],int n){
//       sort(a,n);

//       int i=0,j=n-1;
//       int var1=a[j--];
//       int var2=a[i++];
//         while(i<=j)
//         {
//           printf("%d %d",var1,var2);
          
//         }
//         if(n%2!=0)
//         {
//           printf("%d\t",a[i]);
//         }
// }

// int main()
// {
//   int a[100],i,n;
//   printf("Enter the no of elems:");
//   scanf("%d",&n);
//   printf("Enter array elems:");
//      for(i=0;i<n;i++)
//      {
//        scanf("%d",&a[i]);
//      }
//       alternate_sort(a,n);
//      return 0;
// }

//swap 2 nos using Xor operator

// int main()
// {
//   int a,b;
//   printf("Enter the digits:");
//    scanf("%d %d",&a,&b);
//  printf("The previous numbers are :a=%d and b=%d \n",a,b);
//   //  a=a^b;
//   //   b=a^b;
//   //  a=a^b;
//  a=a+b;
//  b=a-b;
// a=a-b;
// printf("The swapped numbers are a=%d and b=%d",a,b);
//  return 0;  
// }


// int ncr(int n,int r)
// {
//    int  result =1;
//      for(int i=0;i<r;i++){
//          result*=(n-i);
//          result/=(i+1);
//      }
//      return result;
// }


// int pascal(int r,int c)
// { 
//   return ncr(r-1,c-1);
// }


// int main()
// {
//  int r,n,c;
//  printf("Enter the row number");
//  scanf("%d",&r);
//  printf("Enter the column number"); 
//  scanf("%d",&c);
//  int result = pascal(r,c);
//  printf("The pascal's triangle is: %d\n",result);
//  return 0;
// }


// Kadane's algorothm (optimal approach)
// int max_sum(int a[100],int n)
// {  
//   int sum=0;
//   int max;
//    for(int i=0;i<n;i++)
//    {
//      sum+=a[i]; 
//        if(sum>0)
//          {
//            max=sum;
//            break;
//          } 
//          else{
//           sum=0;
//          }  
//    } 
//    return sum; 
// }

// int main()
// {
//   int a[100],i,n;
//   printf("Enter the size of array \n");
//   scanf("%d",&n);
//   printf("Enter the array elements");
//    for(i=0;i<n;i++)
//    {
//     scanf("%d",&a[i]);
//    }
//   int result = max_sum(a,n);
//   printf("The maximum sum of the subarray  is:%d\n",result);
//   return 0;
// }


//Dutch national flag alogorithm
// void swap(int a,int b)
// {
//    int temp=a;
//      a=b; 
//      b=temp;
// }

// int max(int a[100],int n)
// {  
//    int mid=0,high=n-2,low=0;
//    while(mid<=high)
//    {
    
//        if(a[mid==0])
//        {
//          swap(a[low],a[mid]);
//          low++;
//          mid++;
//        }
//        else if(a[mid]==1)
//        {
//          mid++;
//        }
//        else 
//        {
//          swap(a[mid],a[high]);
//           high--;
//        }
//        }
//        //returning middle element as it will be in sorted order.
//       //  return a[mid];
//    }
   

// int main()
// {
//    int a[100],n,i;
//    printf("Eneter number of elements");
//    scanf("%d",&n);
//    printf("Enter  the array elements:");
//     for(i=0;i<n;i++)
//     {
//        scanf("%d",&a[i]);
//     }
//     int result = max(a,n);
//    printf("The sorted array elements are:%d\t",result);
//    {
//      printf("%d",a[i]);
//    }
//    return 0;
// }


//buy and sell
// int profit(int a[100],int n)
// {
//    int max_profit=0;
//    int min_price= INT_MIN;
//    int len = sizeof(a);
//    for(int i=0;i<len;i++)
//    {
//      min_price= _min(min_price,len);
//      max_profit = _max(max_profit,len-min_price);
//    }
//    return max_profit;

// }
// int main()
// {
//   int a[100],n;
//   scanf("%d",&n);
//   for(int i=0;i<n;i++)
//   {
//     scanf("%d",&a[i]);
//   }
//   int result  = profit(a,n);
//   printf("The maximum profit is %d\n",result);
//   return 0;
// }

//Rotating matrix by 90 degree
// void swap(int a,int b)
// {
//    int temp =a;
//     a=b;
//     b=temp;
// }
// int reverse(int a[100][100])
//  {
//     int m,n;
//     for(int i=0;i<n/2;i++)
//     {
//       for(int j=0;j<m;j++)
//       {
//       int temp = a[i][j];
//       a[i][j] = a[n-i-1][j];
//       a[n-i-1][j] =  temp;
//     }
//     }
//  }
// int rotate(int mat[100][100],int n)
// {
//    int n = sizeof(mat);
//    int i,j;
//      for(i=0;i<n-1;i++)
//      {
//        for(j=i+1;j<n;j++)
//        {
//          swap(mat[i][j],mat[j][i]);
//        }
//      }

//      reverse(mat);
// }
// void swap(int *a,int *b)
// {
//    int temp = *a;
//    *a = *b;
//    *b =temp;
// }

// int sort(int a[100],int n)
// {
//   int i,j;
//    for(i=0;i<n;i++)
//    {
//      for(j=0;j<n-i-1;j++)
//      {
//       if(a[j]>a[j+1])
//       {
//         swap(&a[j],&a[j+1]);
//       }
//      }
//    }
//      for(i=0;i<n-1;i++)
//      {
//        if(a[i]==a[i+1])
//          return a[i];
//      } 
// }

// int main()
// {
//    int a[100],i,n,j;
//   printf("Enter the no of elements");
//    scanf("%d",&n);
//   printf("Enter the array elements:");
//     for(i=0;i<n;i++)
//     {
//        scanf("%d",&a[i]);
//     }
//     int result=sort(a,n);
//   printf("The duplicate element in the array is :%d",result);
//   return 0;
// }


// int repeating(int a[100],int n)
// {
//   int val1,val2;
//    int sn=n*(n+1)/2;
//    int s2n = n*(n+1)*(2*n+1)/6;
//    int s1=0,s2=0;
//     for(int i=0;i<n;i++)
//     {
//         s1+= a[i];
//         s2+= a[i]*a[i];    
//     }
//        val1 =s1-sn;
//        val2 = s2-s2n;
//        int x = val2/=val1; 
//        int y = x-val1;
//        return (int)x,(int)y;
//  }





//  int main()
//  {
//   int a[100],n;
//   printf("Enter the number of elemensts:");
//   scanf("%d",&n);
//   printf("Enter the array elems:");
//   for(int i=0;i<n;i++)
//   {
//   scanf("%d",&a[i]);
//   }
//   int result = repeating(a,n);
//     printf("The repeating and missing numbers are: %d and %d",result);
//   return 0;
//  }

//seraching in 2d matrix

// int search(int row[100],int col[100],int target,int m,int n)
// {

//     for(int i=0;i<n;i++)
//     {
//        for(int j=0;j<m;j++)
//        {
//            if(row[i]*m +col[j] == target){
//             return 1;
//        }
//     }  
// }
//  return 0;
// }



 //power(x,n)

// int main()
// {  float n,x;
//    float ans =1.0;
//    printf("Enter the value of x: ");
//    scanf("%f", &x);
//    printf("Enter the value of n: ");
//    scanf("%f", &n);
//        if(n<0)
//        { 
//          x= 1.0/x; //for -ve exponent value
//          n=-n;
//        }
//        for(int i=0;i<n;i++){
//         ans*=x;
//        }
//     printf("\n The value of (%f,%f) is : %.4f\n ",x,n,ans);
//     return 0;

// }


#include<math.h>
//Majority of element apparing graeter thean n/2 elements
// int majority(int a[100],int n)
// {
//   int count=0;
//   int i,j;
//   double store = floor(n/2);
//   for( i=0;i<n;i++)
//   {
//     count=0; //checking for occurrences
//      for( j=0;j<n;j++)
//      {
//        if(a[i]==a[j]) //chekcing if matching elem in found
//        {
//         count++; //incremnt the count of element if found.
//        }
//        if(count>store) //returning the element found in larger number if condition satisfies
//         return a[i];
//      }         
// }
// }

//Majority of elements appering than n/3 times
// int majority(int a[100],int n)
// {
//   int count;
//   int i,j;
//   int store= floor(n/3);
//   for(i=0;i<n;i++)
//   {
//       count=0;
//      for(j=0;j<n;j++)
//      {
//         if(a[i]==a[j])
//          count++;
//   }
//      if(count>store)
//       return a[i];
// }
//   return  -1;
// }

// int main() {
//     int a[100], n;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     printf("Enter the array elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     int result = majority(a, n);

//     if (result != -1) {
//         printf("The majority element is: %d\n", result);
//     } else {
//         printf("No majority element found.\n");
//     }
//     return 0;
// }


//Unquie paths in matrix 

// int unique(int a[100],int m,int n)
// {
//    for(int i=0;i<n;i++)
//      { 
//        for(int j=0;j<m;j++)
//        {
           
//        }
//      }
// }
// int grid_paths(int i,int j,int m,int n)
// {  
//    if((i==m-1)&&(j==n-1))
//    return 1;
//    if((i>=m)&&(j>=n))
//    return 0;
//    else 
//    return 
//    grid_paths(i+1,j,m,n)+grid_paths(i,j+1,m,n);
// }

// int uniquePaths(int m,int n)
// {
//   return grid_paths(0,0,m,n);
// }

// int main()
// {
//    int m,n;
//    printf("Enter number of rows and columns : \n");
//    scanf("%d%d",&m,&n);
//    int result= grid_paths(0,0,m,n);
//    printf("\nNumber of Unique Paths are:%d",result);
//    return 0;
//

//Reverse pairs Brute force approach

// int reverse_pairs(int a[100],int n)
// {
//    int count=0;
//        for(int i=0;i<n;i++)
//        {
//          for(int j=0;j<n;j++)
//          {
//              if((i<j)&&(a[i]>2*a[j]))
//              count++;
//          }
//        }
//        return count;
// }

// int main()
// {
//    int a[100],i,j,n;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//      scanf("%d",&a[i]);
//    }
//    int result = reverse_pairs(a,n);
//    printf(" The no of pairs available are:%d\n",result);
//    return 0;
// }


//Pair with given sum exists ion array
// char pairs(int a[100],int n){
//     int target;
//     char YES[10];
//     char NO[10] ;
//     for(int i=0;i<n;i++)
//     {
//       for(int j=i+1;j<n;j++){
//        if(a[i]+a[i+1]==target){
//          return YES;
//     }   
// }
// }
// return NO;
// }

//triplets woth given pair
// int triplets(int a[100],int n)
// {
//   int k,target=0;
//   int arr[k];
//   for(int i=0;i<n;i++)
//   {
//      for(int j=0;j<n;j++)
//      {
//        arr[k]=target-(a[i]+a[j]+arr[k]);
//      }
//   }
// }
// int main()
// {
//    int a[100],n,target;
//    printf("Enter the target");
//    scanf("%d",&target);
//    printf("Enter the number of elements:");
//    scanf("%d",&n);
//    printf("Enter number of elements in an array:");
//    for(int i=0;i<n;i++)
//    {
//      scanf("%d",&a[i]);
//    }
//    int result = pairs(a,n);
//      if (result)
//        printf("YES");
//     else{
//         printf("NO");
//     }
//     return 0;
// }

//Longest Common Subsequence
// #include<unordered_set>

// int lcs(int a[100],int n)
// {
//    if(n==0)
//      return 0;
//     int longest =1;
//       for(int i=0;i<n;i++)
//       {
          
//       }

    
// }
// int main()
// {
//   return 0;
// }
// }


//K Largest sum element of array

// int kthlargest(int arr[100],int n)
// {
    
// }


//Length of Longest Substring without repeating character using C code.

// #include <stdio.h>
// #include <stdlib.h>
// #include<string.h>
// // #include<unordered_set>
// void printSubStr(char *str, int start, int end)
// {
//   while (start <= end)
//   {
//     printf("%c", str[start]);
//     start++;
//     }
//     }
//     int lengthOfLongestSubstring(char *str)
//     {
      
//       int n = strlen(str);
//       int maxLen = 0, len = 0, start = 0;
//       while (start < n)
//       {
//         len = 1;
//         char *res = strchr(str + start+1,str[start]);

//         if(res!=NULL){
//         start = res - str + 1;
//         }
//          else{
//           start = n;
//          }
//          if(len>maxLen)
//          {
//            maxLen=len;
//          }
//       }
        
//           return maxLen;
// }

//          int main()
//          {
//            char str[100];
//            scanf("%s",str);
//            int result =  lengthOfLongestSubstring(str);
//            printf("The length of longest subarray is:%d",result);
//            return 0;
//          }

         //2sum
      //   int twosum(int a[100],int n)
      //   {
      //      for(int i=0;i<n;i++)
      //      {
      //       for(int j=i+1;j<n;j++)
      //       {
      //          if(a[i]+a[j]==0)
      //            return  1;
      //       }
      //      }
      //      return 0;
      //   }
      //  int main()
      //  {
      //   int a[100],n;
      //    scanf("%d",&n);
      //   for(int i=0;i<n;i++)
      //   {
      //      scanf("%d",&a[i]);
      //   }
      //   int result = twosum(a,n);
      //   printf("%d\n",result);
      //   return 0;
      //  }
      //








