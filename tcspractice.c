#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<limits.h>

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
int msin()
{
    int prime[100];
    int store[200];
     int ans =0;
     
}
