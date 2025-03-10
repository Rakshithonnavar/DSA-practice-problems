#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Code to find factors of a number:
void factors(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {   

            printf("%d\t",i);
        }
    }
  
}


//code to find weather it is a perfect number or not:
// defination of perfect number: A number is called perfect if the sum of its divisors is equal to the number itself.
// for example: 6 is a perfect number because 1+2+3=6


void perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }
}

//code to check weather a number is prime or not:
void prime(int n)
{
    int i,flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}

//write a code to check weather a number is composite number or not:
void composite(int n)
{
    int i,flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("It is a composite number");
    }
    else
    {
        printf("It is not a composite number");
    }
}
//code to find weather given number is strong number or not:
//defination of strong number: A number is called strong number if the sum of the factorial of its digits is equal to the number itself.
//for example: 145 is a strong number because 1!+4!+5!=145
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
void strong(int n)
{
    int sum=0 , temp=n;
    while(n!=0)
    {   
        int digit = n%10;
        sum+=fact(digit);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number \n");
    }
}
//Code to generate fibonacci series using recursion:
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
//code to find weather a number is armstrong number or not:
//defination of armstrong number: A number is called armstrong number if the sum of the cube of its digits is equal to the number itself.
//for example: 153 is a armstrong number because 1^3+5^3+3^3=153
void armstrong(int n)
{
    int sum=0,temp=n;
    while(n!=0)
    {
        int digit = n%10;
        sum+=digit*digit*digit;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("It is a armstrong number");
    }
    else
    {
        printf("It is not a armstrong number");
    }
}

//Code to find weather a number is Sunny number:
//defination of sunny number: A number is called sunny number if the number is a perfect square and one less than the number is also a perfect square.
//for example: 24 is a sunny number because 24=5^2-1=4^2

void sunny(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n==i*i && (n-1)==(i-1)*(i-1))
        {
            printf("It is a sunny number");
            break;
        }
    }
    if(i>n)
    {
        printf("It is not a sunny number");
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factors are: \n");
    factors(n); //function call to find factors of a number
    printf("\n");
    perfect(n); //function call to check weather it is a perfect number or not
    printf("\n");
    prime(n); //function call to check weather it is a prime number or not
    printf("\n");
    composite(n); //function call to check weather it is a composite number or not
    printf("\n");
    strong(n); //function call to check weather it is a strong number or not
    printf("\n");
    // fib(n); //function call to generate fibonacci series
    // printf("The fibonacci series is: \n");
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d\t",fib(i));
    // }
    // return 0;
    printf("\n");
    armstrong(n); //function call to check weather it is a armstrong number or not
    printf("\n");
    sunny(n); //function call to check weather it is a sunny number or not
    return 0;
}










