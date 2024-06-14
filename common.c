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

//14.Reversing array in place:
int array_reverse(int arr[100],int n,int pos)
{
   int end = n-1,i;
   for(int i=pos;i<(pos+n)/2;i++)
   {
      int temp =  arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
   }
   return arr[i];
}

//15.Reversing the order of words
int reverse(int arr[100],int n)
{
   
}
//16.Determining the leap year:
int leapOrNot(int year)
{
   if((year%4==0)&&(year%100!=0)||(year%400==0))
   {
      return 1;
   }
   else{
      return 0;
   }
  
}
//17. Performing Binary search:


//18.Checking for anagrams:
int anagram(char s1[],char s2[],int n)
{
   int k;
   int count=0;
   if(strlen(s1==s2))
     {
      char MAX_CHAR;
      int count1[MAX_CHAR];
      int count2[MAX_CHAR];
     for(int i=0;i<MAX_CHAR;i++)
     {
        count1[i]=0;
        count2[i]=0;
     }
      for(int i=0;i<n;i++)
        count1[s1[i]-'a']++;
      for(int i=0;i<n;i++)
         count1[s1[i]-'a']--;

        for(int i=0;i<MAX_CHAR;i++)
        {
          if(count1[i]>count2[i])
          {
            count+=abs(count1[i]-count2[i]);
          }
        }
       
  return(count<=k);
     }
}

//20 Reversing a number:
int reverse(int n)
{
    int rev=0,rem=0;
    while(n!=0)
    {
    rem = n%10;
    rev=rev*10+rem;
    n/=10;
    }
    return rev;
}
//21 First non repeating character of string:

// THIS IS A DRIVER CODE WHICH ALL PROGRAMS:
int main()
{
    int arr[100], n,i,pos;
   //  char str[100],a,z;
   int a,b,year,result;
   char str1[100],str2[100];
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the 2 numbers");
    scanf("%d%d",&a,&b);
    printf("Enter the position");
    scanf("%d",&pos);
    printf("Enter the two strings:");
    scanf("%s%s",str1,str2);
   
    if(anagram(str1,str2,n))
    {
    return 1;
    }
    else{
      return 0;
    }
   //  printf("Enter the string");
   //  scanf("%s",str);
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Enter the year");
     scanf("%d",&year);
   //  int result5 = armrstrong();
   //  reverse_string(a,z);
   //  int result3 = palindrome(str,i);
   //  int result1 = Isprime(n);
   //  int result7 = factorial(n);
      //  repetitive(arr,n);
      //int result12 = gcd(a,b);
      // int result12a = lcm(a,b);
       int result14 = array_reverse(arr,n,pos);
   //     int result = sqqrt(n);
   //  int result20 = reverse(n);
   // int result17 = leapOrNot(year);
   //  printf("The sqaure of %d is %d",n,result);
   // printf("The result is %d",result5);
   //  printf("The result is %d",result3);
   // printf("The result is: %s\n",str);
   //  printf("The factorial is:%d",result7); //Factorial o/p
   printf("The revsered array in the given position %d is :",pos);
     for(int i=0;i<n;i++)
     {
      printf("%d ",arr[i]);
     }
      printf("The result17 is %d",result);
    return 0;
}





  