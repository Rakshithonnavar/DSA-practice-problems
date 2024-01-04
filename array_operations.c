#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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


int reverse_array(int a[100],int n,int pos)
{
     int n = sizeof(a);
     if(pos<0||pos>=n-1)
       return -1;


int start = pos+1;
int end = n-1;


while(start<end)
{
     
}
}

int main()
{
        
        int n,a[100],min,max,pos;
        printf("Enter size");
        scanf("%d",&n);
        printf("Enter array elements");
        for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        }
        int result = reverse_array(a,n,pos);
        if(result==-1)
        printf("Invalid Position\n");
        else
        printf("Reverse Array is %d ",result);
        
        return 0;
    
}

//Subarry with sum k
int subarray(int a[100],int k)
 { 
  int sum=0;
  int len=0;
  int n = sizeof(a);
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++){
     sum+=a[k];
   len = max(len,i-j+1);  
 }
 }
 return len;
 }
 



      
