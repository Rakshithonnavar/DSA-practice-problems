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
// THIS IS A DRIVER CODE WHICH ALL PROGRAMS:
int main()
{
    int n,i;
    char str[100];
    printf("Enter the number");
   //  printf("Enter the string");
   //  scanf("%s",str);
    scanf("%d",&n);
    int result5 = armrstrong();
   //  int result3 = palindrome(str,i);
   //  int result1 = Isprime(n);
   //  int result7 = factorial(n);
   printf("The result is %d",result5);
   //  printf("The result is %d",result3);
   //  printf("The factorial is:%d",result7); //Factorial o/p
    return 0;
}
