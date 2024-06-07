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
//Integer Palindrome number:
int isPalindrome(int n)
{
    int rev=0,rem;
    while(n!=0)
    {
    rem = n%10;
    rev*rev+rem;
    n/=10;
    }
}
//Avoiding deadlocks program:



