#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <limits.h>

int main()
{
    int n,n1,n2,n3;
     n3=n1+n2;
     n1=n2;
     n2=n3;
     printf("%d%d ",0,1,n3);
}
//Checking for a prime number:
int Isprime(int n)
{
   if((n<2)&&(n&2==0))
   {
      return 1;
   }
   else
   {
    return 0;
   }
}
//String Palindrome:
// int 
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int result = Isprime(n);
    printf("The result is:%d",result);
    return 0;
}
