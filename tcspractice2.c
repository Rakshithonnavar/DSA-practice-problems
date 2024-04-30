//Palindrome number:
#include<stdio.h>
#include<stdlib.h>
int main()
{
   
    int rev=0,n,rem;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
       rem = n%10;
       rev*=10+rem;
       n/=10;
    }
    if(rev==n)
    {
        printf("Palindrome number");
    }
    else{
        printf("Not a palindrome number");
    }
}

//Profram to print weather the given number is armstrong number:
int main()
{
    int n,sum=0,result;
    char str[100];
    int n = strlen(str);
    printf("Enter the number");
    scanf("%s",str);
    for(int i=0;i<n;i++)
    {
    sum+= str[i]-'0';
    }
    result = pow(sum,3);
    if(result==n)
    {
        printf("Armstrong number");
    }
    else{
        printf("Not armstrong number");
    }
  return 0;
}
