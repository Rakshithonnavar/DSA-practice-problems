#include<stdio.h>
#include<stdlib.h>
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
int difference(int arr[100],int k,int n)
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
    int a[100],n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     int result = difference(arr,k,n);
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
        else{
            break;
        }
      }
    }
    return max1;
}
    // int len  =  strlen();

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
     int result = find_horses(int n,int k);

}

