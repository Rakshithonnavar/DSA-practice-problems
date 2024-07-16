// //Palindrome number:
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
   
//     int rev=0,n,rem;
//     printf("Enter the number");
//     scanf("%d",&n);
//     while(n!=0)
//     {
//        rem = n%10;
//        rev*=10+rem;
//        n/=10;
//     }
//     if(rev==n)
//     {
//         printf("Palindrome number");
//     }
//     else{
//         printf("Not a palindrome number");
//     }
// }

// //Program to print weather the given number is armstrong number:
// int main()
// {
//     int n,sum=0,result;
//     char str[100];
//     int n = strlen(str);
//     printf("Enter the number");
//     scanf("%s",str);
//     for(int i=0;i<n;i++)
//     {
//     sum+= str[i]-'0';
//     }
//     result = pow(sum,3);
//     if(result==n)
//     {
//         printf("Armstrong number");
//     }
//     else{
//         printf("Not armstrong number");
//     }
//   return 0;
// }

// //Sorting depending on risk severity
// int swap(int *a,int *b)
// {
//     int temp = *a;
//     *a =*b;
//     *b =temp;
// }

// void sort_array(int arr[100],int n)
// {
//     int low=0,high=n-1,mid=0;
//     while(mid<=high)
//     {
//         if(arr[mid]==0)
//         {
//             swap(&arr[low],&arr[mid]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid]==1)
//         {
//             mid++;
//         }
//         else{
//             swap(&arr[mid],&arr[high]);
//             high--;
//         }
//     }
// }
// int main()
// {
//     int arr[100],n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     printf("Enter the  elements in 0's,1's and 2's:");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     sort_array(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",&arr[i]);
//     }
//     return 0;
// }

// //Armstrong number:
// int main()
// {  
//  int rem,count,n;
//  float result;
//  printf("Enter the number");
//  scanf("%d",&n);
//  while(n!=0)
//  {
//     n/=10;
//     n++;
//  }
//  while(n!=0)
//  {
//     rem=n%10;
//     result+=pow(rem,count);
//     n/=10;
//  }
//  if((int)result==n)
//  {
//     printf("Its an armstrong number");
//  }
//  else{
//     printf("Its not an armstrong number");
//  }
//  return 0;
// }

// //Average of numbers:
// int main()
// {
//     int n,a,b;
//     printf("Enter the number:");
//     scanf("%d%d",&a,&b);
//     float average = (a+b)/2.0;
//     printf("The Average is %f",average);
//     return 0;
// }

// //GCD of 2 numbers using eucleadian theorem 
// int gcd(int a,int b)
// {
//      if(a==0)
//        return b;
//     if(a==b&&b==0)
//       return a;
//     else
//       return (a>b)? gcd(a-b,b):gcd(a,b-a);
// }
// int main()
// {   
//     int a,b;
//     printf("Enter 2 numbers:");
//     scanf("%d%d",&a,&b);
//     int result =  gcd(a,b);
//     printf("The gcd of 2 numbers is %d",result);
//     return 0;
// }

// //find LCM of 2 numbers:
// //Formula for lcm of 2 numbers:
// int gcd(int a,int b)
// {
//     if(a==0)
//       return b;
//     return gcd(b%a,a);
// }
// int lcm(int a,int b)
// {
//     return (a/gcd(a,b))*b;
// }
// int main()
// {
//    int a,b; 
//    printf("Enter the number:");
//    scanf("%d%d",&a,&b);
//    int result = lcm(a,b);
//    printf("The lcm of 2 numbers is:%d",result);
//    return 0;
// }

// //Code to check weather a number is palindrome:
// int main()
// {
//   int n,rev=0,rem;
//   printf("Enter the number:");
//   scanf("%d",&n);
//   while(n>0)
//   {
//     rem = n%10;
//     rev = rev*(10+rem);
//     n/=10;
//   }
//   if(rev==n)
//   {
//     printf("Palindrome number");
//   }
//   else{
//     printf("Not a palindrome number");
//   }
//   return 0;
// }

// //Quick sort:
// int swap(int *a,int *b)
// {
//    int temp = *a;
//     *a=*b;
//     *b= temp;
// }
// void quick_sort(int arr[],int n)
// {
//     int low=0,high=n-1,mid=0;
//     while(mid<=high)
//     {
//         if(arr[mid]==0)
//         {
//             swap(&arr[low],arr[mid]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid]==1)
//         {
//            mid++;  
//         }
//         else{
//                 swap(&arr[high],&arr[mid]);
//                  high--;
//         }
//     }
// }
// int main()
// {
//     int arr[100],n;
//     printf("Enter the number of elements:");
//     scanf("%d",&n);
//     printf("Enter array elements :");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     quick_sort(arr,n);
//     printf("The sorted elements are:");
//         for(int i=0;i<n;i++)
//         {
//             printf("%d ",arr[i]);
//         }
//         return 0;
// }
// //Concatneation of 2 strings:
// int main()
// {
//     char str1[100],str2[100];
//     printf("Enter the two strings");
//     scanf("%s%s",str1,str2);
//     printf("The concatenated strings are :%s",strcat(str1,str2));
//     return 0;
// }

// //Print prime numbers upto n:
// void sieveOferato(int n)
// {
//     bool prime[n+1];
//     memeset(prime, true, sizeof(prime));

//     for(int p=2;p*p<=n;p++)
//     {
//         if(prime[p]==true)
//         {
//             for(int i=p*p;i<=n;i+=p)
//               prime[i]=false;
//         }
//     }

//     for(int p=2;p<=n;p++)
//     {
//         if(prime[p])
//           printf("%d",p);
//     }
// }
// //Chocolates on conveyor belt:
// int main()
// {
//     int arr[100],n,j;
//     printf("Enter the number of elements");
//     scanf("%d",&n);
//     printf("Enter the number of elements:");
//     for(int i=0;i<n;i++)
//     {
//        scanf("%d",&arr[i]);
//     }
//     if(arr[j]!=0)
//     {
//         j++;
//     }
//     for(int i=0;i<j;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

// //Reverse an array:
// void swap(int a,int b)
// {
//     int temp = a;
//      a = b;
//      b = temp;
// }
// int main()
// {
//     int n,arr[100];
//     printf("Enter the number of elements:");
//     scanf("%d",&n);
//     printf("Enter the value of elements");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
// }
// int reverse_array(int n,int a[n],int pos)
// {
//     int end=n-1,i;
//     for(int i=0;i<(pos+n)/2;i++)
//     {
//         int temp = a[i];
//         a[i] = a[end];
//         a[end] = temp;
//         end--;
//     }
//     return a[i];
// }
// int main()
// {
//     int arr[100],n,pos;
//     printf("Enter the number of elements");
//     scanf("%d",&n);
//     printf("\nElements are:\n");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int result = reverse_array(n,arr,pos);
//     printf("\nReversed array is :\n",result);
//     return 0;
// }
// //print armstrong number in the arrayy:
// int main()
// {
//     int arr[100],n,origin_num;
//     printf("Enter the number of elements");
//     scanf("%d",&n);
//     printf("Enter the array of elements");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     while(origin_num!=0) //count and store the digits in the numbers:
//     {
//         origin_num/=10;
//         ++n;
//     }
//     while(origin_num!=0)
//     {
//        int rem=origin_num%10;
//        int result+= pow(remainder,n);
//        origin_num/=10;
//     }
//     if(result==origin_num)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

//Code to print 2nd largest element in an array:

void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b = temp;
}
int sort(int n,int arr[n])
{
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n-i-1;j++)
    {
    if(arr[j]>arr[j+1])
      swap(&arr[j],&arr[j+1]);
    }
   }  
}

int large(int n,int arr[100])
{
    if(n<2)
     exit(0);
    if(n>2)
    {
        sort(n,arr);
        return arr[n-2];
    }
    else{
        return 0;
    }
}
int main()
{
    int arr[100],n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array of elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result =  large(n,arr);
    printf("The second largest element in an array is %d",result);
    return 0;
}
<<<<<<< HEAD

//Reverse an array:
void swap(int a,int b)
{
    int temp = a;
     a = b;
     b = temp;
}
int main()
{
    int n,arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the value of elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
int reverse_array(int n,int a[n],int pos)
{
    int end=n-1,i;
    for(int i=0;i<(pos+n)/2;i++)
    {
        int temp = a[i];
        a[i] = a[end];
        a[end] = temp;
        end--;
    }
    return a[i];
}
int main()
{
    int arr[100],n,pos;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("\nElements are:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result = reverse_array(n,arr,pos);
    printf("\nReversed array is :\n",result);
    return 0;
}
//print armstrong number in the arrayy:
#include<math.h>
int main()
{
    int arr[100],n,origin_num;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array of elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(origin_num!=0) //count and store the digits in the numbers:
    {
        origin_num/=10;
        ++n;
    }
    while(origin_num!=0)
    {
       int rem=origin_num%10;
       int result+= pow(rem,n);
       origin_num/=10;
    }
    if(result==origin_num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//Quick sort
void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

int partition(int arr[100],int low,int high)
{
    int pivot = arr[high];
    int i = low-1;

    for(int j=0;j<=high;j++)
    {
        if(arr[j]<pivot)
        {
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

int quick_sort(int arr[100],int low,int high)
{
    if(low<high)
    {
        int pi  = partition(arr,low,high);
        quick_sort(arr,low,pi+1);
        quick_sort(arr,pi+1,high);
    }
}
