#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>

//Highest Factor or  kth largest factor of n, problem
int highestfactor(int n,int k)
    // int store[100];
{
    int i;
    for(int i=n;i>0;i--)
    {
        if(n%i==0)
         k--;
    }
    if(k==0)
      return i;
    return -1;
}

//target difference problem
int count=0;
int difference(int a[100],int k,int n)
{
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(a[i]-a[j]||a[j]-a[i]==k)
        {
            count++;
        }
    }
   }
   return count;
}

int main()
{
    int a[100],n,k;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     int result = difference(a,k,n);
     printf("The total of possible pairs are:%d",result);
    return 0;
}

//Kth largest Factor of n:
 int Kthlargest(int a[100],int n,int d)
 {
     if(n%d==0)
      printf("Factor of digit");
     
 }


//Count Pages in book
int main()
{
    int n,p,min;
    printf("Enter the number of pages");
    scanf("%d",&n);
    printf("Enter the ppages to be turned:");
    scanf("%d",&p);
    if(n<p)
    return -1;
    min = (n/2)-(p/2);
    if(min>p/2)
    {
        min=p/2;
    }
    prinf("%d",min);
    return 0;
}


//Two wheelers and four wheelers Manufacturing:
int main()
{
    int v,w;
    float ans;
    printf("Enter the vehicle count");
    scanf("%d",&v);
    printf("Enter the wheels count");
    scanf("%d",&w);
    if(w<2||v>w||w%2!=0)
    {
        printf("Invalid Inputs");
    }
    else{
        ans  = ((4*v)-w)/2; //Main logic line 
    }
    printf("The two wheeers & four heel that can be mad are %d & %d",ans,v-ans);
    return 0;
}

//ODDLY EVEN PROBLEM 
//Difference of elements in array:

int main()
{
  int odd=0,even=0,i;
  int num;
  printf("Enter the number");
  scanf("%d",&num);
  while(num!=0)
  {
      if(i%2==0)
      {
          even+=num%10;
          num/=10;
          i++;
      }
      else
      {
          odd+=num%10;
          num/=10;
          i++;
      }
  }
  printf("%d",abs(odd-even));
  return 0;
}

//Arragemnt of persns in round table:

int factorial(int n)
{
    if(n==0)
      return 1;
    else
     return n*factorial(n-1);
}
int main()
{
   int  num;
   printf("Enter the number of persons:");
   scanf("%d",&num);
   int result = factorial(num-1) *2;
   printf("The possible ways of doing this is %d",result);
   return 0;
}

//Understanding entactment:
int main()
{
 int n,z;
 int arr[100];
 printf("Enter the number of elements");
 scanf("%d",&n);
 printf("Enter the array elements:");
   for(int i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
  for(int i=1;i<n;i++)
  {
     if(arr[0]==arr[i])
     {
        z++;
     }
  }
  prinf("%d",n-z-1);
  return 0;
}

//Finding horses problem:
int find_horses(int a[100],int n,int k)
{
    int sum=0,m;
    int max1= INT_MIN;
    for(int i=1;i<n;i++)
    {
        sum+=a[i];
      for(int j=1;j<m;j++)
      {
        sum+=a[j];
        if(sum<=k)
        {
            m=j-i+1;
            max1 = max(max1,m);
        }
        else
        {
            break;
        }
      }
    }
    return max1;
}
    

int main()
{
     int a[100],n,k;
     printf("Enter the number of horses:");
     scanf("%d",&n);
     printf("Enter the counts:");
     for(int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     printf("Enter the reward money:");
     scanf("%d",&k);
     int result = find_horses(a,n,k);
     printf("The maximum lengh is %d",result);
     return 0;
}

//Fiding rooms problems:
int main()
{
    int k,n,arr[100];
    printf("Enter the number of rooms:");
    scanf("%d",&n);
    printf("Enter the target sum:");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    { 
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                printf("The value are %d & %d",i+1,j+1);
                return ;
            }
        }
    }
}

//Pattern problems for tcs nqt:
//Right half pyramid:
int main()
{
    int i,j,rows;
    printf("Enter the no of rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;++i)
    {
        for(int j=1;j<=i;++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//Priting numbers from 1-10:
int main()
{
    int rows;
    scanf("%d",&rows);
    for(int i=0;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    }
    return 0;
}

//Inverse pyramid of numbers:
  int main()
  {
    int rows;
    printf("Enter the numb er of rows:");
    scanf("%d",&rows);
    for(int i=rows;i<=1;--i)
    {
        for(int j=1;j<i;++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
  }

//Full Pyraamid 
int main()
{
    int rows,space,k;
    for(int i=1;i<=rows;++i, k=0)
    {
         for(space=1;space<=rows-1;++space)
         {
            printf(" ");
         }
         while(k!=2*i-1)
         {
            printf("*");
            ++k;
         }
         printf("\n");
    }
    return 0;
}


//Full pyramid of numbers :
int main()
{
    int rows,space,k,count1;
    printf("Enter the no of rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;--i,k=0)
    {
        for(space=1;space<=rows-1;++space)
        {
           printf(" ");
           ++count;
        }
        while(k!=2*i-1)
        {
            if(count<=rows-1){
            printf("%d",i+k);
            ++count;
        }
        else{
            ++count;
            printf("%d",(i+k-2*count1));
        }
        ++k;
        }
        count1 = count=k=0;
        printf("\n");
    }
    return 0;
}

//Pascal'triangle:
int main()
{
    int rows,space,count=1;
    printf("Enter the no of rows:");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++)
    {
        for(space=1;space<=rows-1;space++)
        {
           printf("*");
        }
        for(int j=0;j<=i;j++)
        {
            if(j==0||i==0)
            {
               count=1;
            }
            else
            {
                count*=(i-j+1)/j;
                printf("%4d",count);
            }
            printf("\n");
        }
    }
    return 0;
}

//Floyd's Triangle:

int main()
{
   int rows,i,j,number=1;
   printf("Enter the number of rows:");
   scanf("%d",&rows);
   for(int i=1;i<=rows;i++)
   {
    for(j=1;j<i;j++)
    {
        printf("%d",&number);
        ++number;
    }
    printf("\n");
   } 
   return 0;
}

//Arranging accordig to the board numbers :

int main()
{
    int n,arr[100],b[100],ans=0;
    printf("Enter the student count:");
    scanf("%d",&n);
    printf("Enter the Jersey numbers in increasing order");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the board numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    while(1){
    int store[100];
    ans++;
    for(int i=0;i<=n;i++)   //looping throug the elements and then sring the shifed arrya in another arryay
    {
       store[i]==arr[b[i]-1];
    }
     int sorted =1;
      for(int i=0;i<n-1;i++)
      {
        if(store[i]>store[i+1])
        {
            sorted=0;
            break;
        }
      }
      if(sorted)
      {
        break;
      }
    }
    printf("Number of iterations needed are %d\n",ans);
    return 0;
}


//Coverting a string A to B by performig some operations:
void swap(char a[100],char b[100])
{
   int temp = a;
      a = b;
      b = temp;
}

int main()
{
    char A[100];
    char B[100]; 
    int cost = 0;
    int len = strlen(A);
    for(int i=0;i<len;i++)
    {
       if(A[i]!=B[i])
       {
           if(i<len-1 && A[i+1]!=B[i+1])
           {
            swap(A[i],A[i+1]);
            cost++;
           }
           else{
               cost++;
           }
       }
    }
    return cost;  
}

//Risk rating in array elements:
int main()
{
 int n, arr[100],l=0,m=0,high=n-1;
 printf("Enter the number of elemenets:");
 scanf("%d",&n);
 printf("Entre the arrya elements in range of 0-2:");
 for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 }
 while(m<=high)
 if(arr[m]==0)
 {
    swap(arr[l++],arr[m++]);
 }
 else if(arr[m]==1)
 {
   m++;
 }
 else 
 {
 swap(arr[m],arr[high--]);
 }
}

//Finding  the priduct price n:
int main()
{  
    int  n;
    int  product=1;
    printf("Enter the value of n");
    scanf("%d",&n);
    while(n>0)
    {
        int digit = n%10;
        product*= digit;
        n/=10;
    }
    printf("The result value is %d",product);
    return 0;
}

//Program to priting consecutive prime numbef within an array:
int main()
{
    int prime[100];
    int store[200];
    int ans =0;
    int n;

   prime[0]=prime[1] = 1;
   for(int p=2;p<=n;p++)
   {
    if(!prime[p])
    {
       store[ans++]=p;
       for(int i= p*p;i<=n;i+=p)
       {
        prime[i] = 1;
       }        
    }
   }
     int sum=2;
     for(int i=1;i<ans;i++)
     {
        sum+=store[i];
        if(sum>n)
          break;
        if(!prime[sum])
        {
            ans++;
        }
     }
     printf("%d\n",ans);
     return 0;
    }

    //Choosimg the right option:
    int main()
    {
        int offer[2],installments,year,roi,principle,sum=0,square;
        printf("Entre the principle value");
        scanf("%d",&principle);
        printf("Enter the year");
        scanf("%d",&year);
        printf("Enter the installaments");
        scanf("%d",&installments);
        for(int i=0;i<2;i++)
        {
           for(int j=0;j<installments;j++)
           {
               square = pow((1+roi),year*12);
               int emi = (principle*(roi)/(1-1/square));
                sum +=emi;
           } 
           offer[i]=sum;
        }
        if(offer[0]<offer[1])
        {
            printf("Bank A");
        }
        else{
            printf("Bank B");
        }
    }

//Counting The number of rock samples falling into each range:
#define size 100
int stack[100];
void push(int ele){
int top=-1;
if(top==size-1)
{
    printf("Stack overflow");
}
top++;
stack[top]=ele;
}

int main()
{
    int s[50],r,a,b,ans,store[100],ansv,i;
    printf("Enter the number of samples:");
    scanf("%d",&s);
    printf("Enter the Range values");

    printf("Entre the samples values:");
     for(int i=0;i<s;i++)
     {
        scanf("%d",&a);
        store[a]++;
     }
    printf("Enter the count of range:");
    for(int i=0;i<r;i++)
    {
    scanf("%d%d",&a,&b);
    ans=0;
    for(int j=a;j<=b;j++)
    if(store[j])
    {
        ans++;
    
        push(ans);
    }
    for(auto i:ansv)
    printf("%d",i);
return 0;
} 
}

//Kth largest factor of n:
int main()
{
     int i,n,k;
     printf("Enter the number");
     scanf("%d",&n);
     printf("Enter the value of k");
     scanf("%d",&k);
     for(int i=1;i>n;i--)
     {
        if(n%i==0)
        k--;         
     }
     if(k==0)
       return i;
       return -1;
}

//Minimum time required tpo collect candies:
#define max_size 100000
#include <limits.h>

int main()
{
    int i,n,k,a,t;
    printf("Enter the number of test cases");
    scanf("%d",&t);
    int ans[max_size];
    for(int i=0;i<t;i++)
    {
        printf("Enter the number of boxes for test case %d",i+1);
        scanf("%d",&n);
    }
    int pq[max_size];
    printf("Enter the number of candies in each boxes");
    for(int j=0;j<n;j++)
    {
    scanf("%d",&a);
    pq[j]=a;
    }
    for(int j=0;j<n-1;j++)
    {
        for(int k=j+1;k<n;k++){
            if(pq[j]>pq[k])
            {
                int temp = pq[j];
                pq[j]=pq[k];
                pq[k]=temp;
            }
        }
    }
}

//Square free number:
int main(){
int n,c=0;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter numbers less than 20\n");
int a[]={2,3,5,7,11,13,17,19};
for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    if(n%a[i]==0)
    {
        c++;
    }
}
int result = (1<<c)-1;
printf("Result: %d\n",result);
return 0;
}

//Houses Problem:
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{   
    int n,a[100],include=0,exclude=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the value for houses:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
    int maximum=max(include,exclude);
      include =exclude+a[i];
      exclude =maximum;
    }
   int result = max(include,exclude);
   printf("The maximum possible value is %d",result);
}

//Chocolate factory problem:
int main()
{
    int n,arr[100],j=0;
    printf("Enter the number of chocolates");
    scanf("%d",&n);
    printf("Enter  the values");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[j]);
    if(arr[j]!=0)
    {
        j++;
    }
    }
    for(int i=0;i<j;i++)
    {
        printf("The arranged array is %d\t",arr[i]);
    }
    return 0;
}

//Conversion of decimal to binary and toggliing bits and displaying the bits:
int main()
{
 int n;
 printf("Enter the value");
 scanf("%d",&n);
 int k = (1<<(int)(log2(n)+1)-1); //Calculating
 printf("Tne integer value after toglling is %d",n^k);
 return 0;
}

//Counting sundays from month initaition withing the given number of days:
# define MAX_LENGTH 4
int main()
{
    char str[100];
    int n,ans=0;
    printf("Enter the day of the month");
    scanf("%s",str);
    printf("Enter the integer value");
    scanf("%d",&n);

    char weekdays[][MAX_LENGTH]={
        "mon","tue","wed","thu","fri","sat","sun"
    };
    int values[] = {6,5,4,3,2,1,0};
    int mapsize = sizeof(weekdays)/sizeof(weekdays[0]);
    int m=-1;
    for(int i=0;i<mapsize;i++)
    {
        if(strcmp(str,weekdays[i]==0))
        {
            ans  = 1+(n-m)/7;
        }
    }
    printf("%d",ans);
    return 0;
}

//Count number of elements after last element:
int main()
{
    int n,count=0,a,arr[100];
    int m= INT_MIN;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(n--)
    {
    if(a>=m)
    {
        m=a;
        count++;
    }
    }
    printf("The output is %d",count);
    return 0;
}

//Product of digits
int  main()
{
    int n,product=1,r;
    printf( "Input a positive integer : ");
    scanf("%d", &n );
    while(n>0)
    {
          int digit = n%10;
          product*=digit;
          n /= 10;
    }
    printf("Product of all the digits in the input number is:%d",product);
    return 0;
}
//Findin the maximum number of aqua coloured curtains
int main()
{
   
    char str[100];
     int l,n=strlen(str),max=0;
    printf("Enter the value of string: combination a and b");
    scanf("%s",str);
    printf("Enter the value of partition to be performed");
    scanf("%d",&l);
    for(int i=0;i<n;i++)
    {
          if(n%i==0)
          {
            if(count>max)
            {
                max=count;
                count=0;
            }
          }
          if(str[i]=='a')
            count++;
    }
    if(count>max)
       max=count;
    printf("%d",&max);
    return 0;
}

//Possible way of arranging the people:
int factorial(int n)
{
    if(n==0)
     return 1;
    else
     n*factorial(n-1);
}
int main()
{
   int n;
    printf("Enter the count");
    scanf("%d",&n);
    int arrange = factorial(n-1)*2;
    printf("The possible ways to arrangement are %d",arrange);
    return 0;
}

//Performing sum of digits r number of times:
int main()
{
    int r,sum=0;
    char str[100];
    printf("Enter the digit:");
    scanf("%s",&str);
    printf("Enter the repeatition to be performed");
    scanf("%d",&r);
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        sum+=str[i]-'0';
    }
    sum*=r;
    sprintf(str,"%d",sum);
    while(strlen(str)>1)
    {
  
        for(int i=0;i<n;i++)
        {
            sum+=str[i]-'0';
        }
        sprintf(str,"%d",sum);
    }
    printf("%s",str);
  return 0;
}

//
int main()
{
    int n,arr[100],d,x;
    printf("Enter the count:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter the date:");
    scanf("%d",&d);
    printf("Enter the value of fine:");
    scanf("%d",&x);
    int evencount=0,oddcount=0;
    for(int i=0;i<n;i++){
    if(arr[i]%2==0)
    {
        evencount++;
    }
    else
    {
       oddcount++;
    }
    }
    if(d%2!=0)
    {
        if(evencount==0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",evencount*x);
        }
       } else{
            if(oddcount==0)
            {
                printf("0\n");
            }
            else{
                printf("%d\n",oddcount*x);
            }
        }
    return 0;
}
//