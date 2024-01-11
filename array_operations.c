#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <limits.h>


//  int main()
// {  
//     //Inserting element in an array

//     int a[100], pos,elem,n,i,search,found=0;
//     char choice;
//     printf("Enter the number of elements \n");
//     scanf("%d",&n);
//     printf("Enter the array elements \n");
//     for(i=0;i<n;i++){
//     scanf("%d",&a[i]);
//     }
//     printf("Enter the element to be inserted:");
//     scanf("%d",&elem);
//     printf("Enter the position u want to insert:");
//     scanf("%d",&pos);
//     if(pos<1||pos>n+1)
//     {
//         printf("Invalid position");
//         return 1;
//     }
//     for(i=n-1;i>=pos-1;i--){
//         a[i+1]=a[i];
        
//     }
//     a[pos-1]=elem;
//     n++;
//     printf("The updated array is:");
//          for(i=0;i<n;i++)
//          {
//             printf("%d\t",a[i]);
             
//          }
        
//          printf("\nDo you want delete any element (Y/N)?");
         
//           scanf(" %c",&choice);
//              if(choice=='Y'||choice=='y')
//              {
//                 printf("Enter the postion of Element to be deleted ");
//                 scanf("%d",&pos);
//                 for(i=pos-1;i<n-1;i++)
//                 {
//                     a[i]=a[i+1];    //main part
//                 }
//                  n--;
                 
//        printf("The updated array after deleting the element is:\n");
//           for (i = 0; i < n; i++) {
//         printf("%d\t", a[i]);
//            }

//              }else if (choice=='N'|| choice=='n')
//              {
//                 printf("You choose to exit!");
//              }
//               else{
//                 printf("Invalid option");
//               }
//               printf("\nThe array element to be searched ");
//                 scanf("%d",&search);
//                 for(i=0;i<n;i++)
//     {
//         if(a[i]==search)
//         {
//             found=1;
//             break;
//         }
//     }
//            if(found==1)
//            {
//             printf("Element %d found in the position %d",search,i);
//            }
//         else{
//             printf("Element %d not found!!",search);
//            }
//            return 0;
//     int a[100],i,n,search,found=0;
//     printf("Enter the number of elements \n");
//         scanf("%d",&n);
//     printf("Enter the array elements \n");
//     for(i=0;i<n;i++){
//     scanf("%d",&a[i]);
//     }
//     printf("The array element to be searched \n");
//      scanf("%d",&search);
     
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==search)
//         {
//             found=1;
//             break;
//         }
//     }
//            if(found==1)
//            {
//             printf("Element %d found in the position %d",search,i);
//            }
//         else{
//             printf("Element %d not found!!",search);
//         }
//         return 0;
// }
    
//   //Largest and Smallest element in array
     

//     int getmin(int a[],int n)
//     {
//         if(n==1)
//             return a[0];
//             int min1= getmin(a,n-1);
//           return(a[n-1]<min1)? a[n-1]:min1;
//     }
//      int getmax(int a[],int n)
//      {
//         if(n==1)
//         return a[0];
//          int max1 = getmax(a,n-1);
//       return(a[n-1]>max1)? a[n-1]:max1;
        
//      }

//     int main()
    // {
    //     int n,a[100],min,max;
    //     printf("Enter size");
    //     scanf("%d",&n);
    //     printf("Enter array elements");
    //     for (int i = 0; i < n; i++) {
    //     scanf("%d", &a[i]);
    // }
//           min = getmin(a,n);
//           max = getmax(a,n);
//        printf("Minimum value in the array: %d\n", min);
//        printf("Maximum value in the array: %d\n", max);
//     }


//Second largest element in an array.

// void swap(int* a,int* b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

// void sort(int  a[],int n)
// {
//     for(int i=0;i<n;i++){
//        for(int j=0;j<n-i-1;j++)
//        {
//         if(a[j]>a[j+1]){
//          swap(a[j],a[j+1]);
//         }
//        }
//     }
// }
//   int pLarge(int n,int a[])
//   {
//     int a;
//     if(n>2)
//     {
//         sort(a,n);
//          return a[n-2];
//     }
//     else{
//         return 0;
//     }
//   }
      
//Reversing array elements from  the given index position


// int reverse_array(int a[100],int n,int pos)
// {
//      int n = sizeof(a);
//      if(pos<0||pos>=n-1)
//        return -1;


// int start = pos+1;
// int end = n-1;


// while(start<end)
// {
     
// }
// }

// int main()
// {
        
//         int n,a[100],min,max,pos;
//         printf("Enter size");
//         scanf("%d",&n);
//         printf("Enter array elements");
//         for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//         }
//         int result = reverse_array(a,n,pos);
//         if(result==-1)
//         printf("Invalid Position\n");
//         else
//         printf("Reverse Array is %d ",result);
        
//         return 0;
    
// }

//Subarray with sum k
// int max(int a,int b)
//  {
//    return (a>b)? a:b;
//  }
// int subarray(int a[100],int k,int n)
//  { 

//   int len=0;
//    for(int i=0;i<n;i++)
//    {
//       int sum=0;
   
//      for(int j=i;j<n;j++){
//       sum+=a[j];

//       if(sum==k)
//       {
//    len = max(len,i-j+1);  
//  }
//  }
//    }
//  return len;
//  }

//  int main()
//  {
//    int a[100],n,k;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//      scanf("%d",&a[i]);
//    }
//    scanf("%d",&k);
//    int result = subarray(a,k,n);
//    printf("The longest subarray with sum k is:%d",result);
//    return 0 ;
//  }


//missing and repeating number
//  int  missing_repeating(int a[100],int n)
//  {
//   // int result;
//    int sn= (n*(n+1))/2;
//    int s2n = (n*(n+1)*(2*n+1))/6;
//    int s1=0,s2=0;
//        for(int i=0;i<n;i++)
//        {
//              s1+=a[i];
//              s2+=a[i]*a[i];    
//        }
//        int val1=s1-sn;
//        int val2=s2-s2n;
//          int x= (val1+val2)/2;
//          int y=x-val1;
//          static int result[2];
//          int result[0] = x;
//          int result[1] = y;
//          return result;
//  }
//  int main()
//  {
//    int a[100],n;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//     scanf("%d",&a[i]);
//    }
//    int *res[] = missing_repeating(a,n);
//    printf("Missing number is %d\nRepeating number is %d",res[0],res[1]);
//    return 0;
//  }

//Floor and ceil a given value

int *floor_ceil(int a[100],int x)
{
     int n = sizeof(a)/sizeof(a[0]);
    int * result = (int*)malloc(2*sizeof(int));
    int floor = INT_MAX; //floor value will be stored in this array element
    int ceil =  INT_MIN;
    for(int i=0;i<n;i++)
    {
      if(a[i]<x && a[i]>floor)
      {
         floor =a[i];
      } 
      if(a[i]>x && a[i]<ceil)
      {
        ceil = a[i];
      }
    }
    result[0]=(floor==INT_MAX)? -1:floor;
    result[1]=(ceil== INT_MIN)? -1:ceil;
    return result;
}

int main()
{
   int a[100],x;
   scanf("%d",x);
   int *res = floor_ceil(a,x);
   if(res[0] == -1)
   printf("No Number Found");
   else
   printf("The Floor Value of the Given Number Is %d \n The Ceiling Value of is %d ",res[0],res[1]);
   free(res);
   return 0;
}  
