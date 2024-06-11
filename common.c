#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <limits.h>
// int main()
// {
//     int n,n1,n2,n3;
//      n3=n1+n2;
//      n1=n2;
//      n2=n3;
//      printf("%d%d ",0,1,n3);
// }

//2.Checking for a prime number:
int Isprime(int n)
{
   if((n<2)&&(n&2==0))
   {
      return 1; //prime
   }
   else
   {
    return 0; //not prime
   }
}
//3.String Palindrome:
int palindrome(char str[100],int i)
{
   int n = strlen(str),count=0;
   for(i=0;i<n/2;i++)
   {  
      if(str[i]==str[n-i-1])
      count++;
   }
   if(count==i)
   {
      return 1;
   }
   else{
      return 0;
   }
}
//4.Integer Palindrome:
int numpalindrome(int num)
{
   int rev=0,rem;
   while(num!=0)
   {
   
   rem = num%10;
   rev*=10+rem;
   num/=10;
   }
 return rev;
 if(rev==num)
 {
   return 1;
 }
 else
 {
   return 0;
 }
}

//5.Armstrong number:
int armrstrong()
{
     int result=0,onum,rem,num=0;
for(onum=num;onum!=0;++num)
{
   onum/=10;
}
for(onum=num;onum!=0;onum/=10)
{
   rem=onum%10;
   result += pow(rem,num); 
}
if(result==num)
{
   return 1;
}
else{
   return 0;
}
}
//6.Avoiding Deadlocks:



//7.Factorial Number:
int factorial(int n)
{
 return n==0?1:n*factorial(n-1);
}
//8.Reversing Strings

  void reverse_string(char *a,char *z)
  {
   char temp;
   while(*a<*z)
   {
      temp = *a;
      *a++ = *z;
      *z-- = temp;
   }
  }
//9.Removing repeated elements:
int duplicates(int arr[100],int n)
{
  if(n==0||n==1){
     return n;
  }
     int j=0;
     for(int i=0;i<n-1;i++)
     {
      if(arr[i]!=arr[i+1])
      {
         arr[j+1] = arr[i];
      }
     }
     arr[j+1] = arr[n-1];
     return j;
}
//Seperate driver code for 9th program:
int main()
{
    int arr[100],n,i;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the array of elements:");
      for(int i=0;i<n;i++)
      {
           scanf("%d",&arr[i]);
      }
      for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
     int new_length = remove_duplicates(arr, n);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < new_length; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
//11. Printing repetitive characters:
int  repetitive(int arr[100],int n)
{
   for(int i=0;i<n;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(arr[i]==arr[j])
         printf("%d\n",arr[j]);
      }
   }
}
//12. LCM and GCD of 2 numbers:
int gcd(int a,int b)
{
   if(b==0)
     return a;
   return gcd(a,a%b);
}
int lcm(int a,int b)
{
    return (a/gcd(a,b))*b;
}
//13.Square root of a number without sqrt function:
int sqqrt(int n)
{
if(n<2)
   {
      return n;
   }
{
   int low=1,high=n,mid=low+high/2;
   while(low<=high)
   {
      if(mid*mid==n)
      {
         return  mid;
      }
      else if(mid *mid <n)
      {
         low =mid+1;
      }
      else{
         high=mid-1;
      }
   }
   return high;
}
}
// THIS IS A DRIVER CODE WHICH ALL PROGRAMS:
int main()
{
    int arr[100], n,i;
   //  char str[100],a,z;
   int a,b;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the 2 numbers");
    scanf("%d%d",&a,&b);
   //  printf("Enter the string");
   //  scanf("%s",str);
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
   //  int result5 = armrstrong();
   //  reverse_string(a,z);
   //  int result3 = palindrome(str,i);
   //  int result1 = Isprime(n);
   //  int result7 = factorial(n);
      //  repetitive(arr,n);
      //int result12 = gcd(a,b);
      // int result12a = lcm(a,b);
   //     int result = sqqrt(n);
   //  printf("The sqaure of %d is %d",n,result);
   // printf("The result is %d",result5);
   //  printf("The result is %d",result3);
   // printf("The result is: %s\n",str);
   //  printf("The factorial is:%d",result7); //Factorial o/p
    return 0;
}



  