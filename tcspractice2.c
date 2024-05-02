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

//Program to print weather the given number is armstrong number:
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

//Sorting depending on risk severity
int swap(int *a,int *b)
{
    int temp = *a;
    *a =*b;
    *b =temp;
}

void sort_array(int arr[100],int n)
{
    int low=0,high=n-1,mid=0;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(&arr[low],&arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(&arr[mid],arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[100],n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the  elements in 0's,1's and 2's:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort_array(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",&arr[i]);
    }
    return 0;
}

//Armstrong number:
int main()
{  
 int rem,count,n;
 float result;
 printf("Enter the number");
 scanf("%d",&n);
 while(n!=0)
 {
    n/=10;
    n++;
 }
 while(n!=0)
 {
    rem=n%10;
    result+=pow(rem,count);
    n/=10;
 }
 if((int)result==n)
 {
    printf("Its an armstrong number");
 }
 else{
    printf("Its not an armstrong number");
 }
 return 0;
}

//Average of numbers:
int main()
{
    int n,a,b;
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    float average = (a+b)/2.0;
    printf("The Average is %f",average);
    return 0;
}

//GCD of 2 numbers using eucleadian theorem 
int gcd(int a,int b)
{
     if(a==0)
       return b;
    if(a==b&&b==0)
      return a;
    else
      return (a>b)? gcd(a-b,b):gcd(a,b-a);
}
int main()
{   
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    int result =  gcd(a,b);
    printf("The gcd of 2 numbers is %d",result);
    return 0;
}

//find LCM of 2 numbers:
//Formula for lcm of 2 numbers:
int gcd(int a,int b)
{
    if(a==0)
      return b;
    return gcd(b%a,a);
}
int lcm(int a,int b)
{
    return (a/gcd(a,b))*b;
}
int main()
{
   int a,b; 
   printf("Enter the number:");
   scanf("%d%d",&a,&b);
   int result = lcm(a,b);
   printf("The lcm of 2 numbers is:%d",result);
   return 0;
}