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
//

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


//17.Performing binary search
int binary_search(int arr[100],int n)
{
    int low=0,high=n-1,mid=(low+high)/2,key;
    while(low<=high)
    {
        if(arr[mid]==key)
          return mid;
        else if(arr[mid]>key)
        {
          low=mid-1;
        }
         else
         {
          high=mid+1;
         }
    }
    return high;
}
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
int min(int a,int b)
{
   return a<b? a:b;
}
int fnon_reapeating(char str[100])
{
   int f[256];
   for(int i=0;i<256;i++)
   {
      f[i]=-1;
   
   for(int i=0;i<strlen(str);i++)
   {
      if(f[str[i]]==-1)
      {
        f[str[i]]=i;
      }
      else
      {
         f[str[i]]=-2;
      }
   }
   int res = INT_MAX;//storing min value.
   for(int i=0;i<256;i++)
   {
      if(f[i]>0)
        res = min(res,f[i]);
   }
   if(res == INT_MAX)
     return -1;
     else 
      return res;
   }
}
//22 
//30 Performing the insertion sort:
void insertion_sort(int arr[],int n)
{
   int key;
   for(int i=1;i<n;i++)
   {
       key=arr[i];
       int j=i-1;
   
   while(j>=0 && arr[j]>key)
   {
      arr[j+1]=arr[j];
      j-=1;
   }
   arr[j+1]=key;
   }
}

//Random bubble sort:
void swap(int *a,int *b)
{
   int temp = *a;
   *a=*b;
   *b = temp;
}
int bubble_sort(int arr[100],int n)
{
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n-i-1;j++)
      {
         if(arr[j]>arr[j+1])
         {
               swap(&arr[j],&arr[j+1]);
         }
      }
   }
 }
//31  performing quick sort:

int partition(int a[],int low,int high)
{
   int pivot =  a[high];
   int i=low-1;
  for(int j=0;j<high-1;j++)
  {
    i++;
    if(a[j]<pivot)
      {
      swap(&a[i],&a[j]);
    }
  }
  swap(&a[i+1],&a[high]);
  return i+1;
}

int quick_sort(int arr[100],int low,int high)
{
   int part = partition(arr,low,high);
   if(low<high)
   {
      quick_sort(arr,low,part-1);
      quick_sort(arr,part+1,high);
      }
      return 0;
}
//32 Printing all the permutations of the string:
void permute(char*input,int start,int end)
{
      
      if(start==end)
      printf("%s\n",input);
      else
      {
         for(int i=start;i<=end;i++)
         {
            swap((input+start),(input+i));
            permute(input,start+1,end);
            swap((input+start),(input+i));
         }
      }
}
//33 Transposing of the matrix:

int transpose_matrix(int n,int A[n][n],int B[n][n])
{
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
   {
       B[j][i]=A[i][j];
   }

  }
}

//34 Reversing a string in a place:
void reverse_in_place(char str[100])
{
   int n =strlen(str);
   int start=0,end=n-1;
   int temp;
   while(start<end)
   {

      temp = str[start];
      str[start]=str[end];
      str[end]=temp;
      start++;
      end--;
   }
}

int main()
{
   char str[100];
   printf("Enter the string");
   scanf("%s",str);
   reverse_in_place(str);
   printf("The reversed string is %s",str);
   return 0;

}
//36 Adding Matrices 
#define N 4
int add_matrices(int A[][N],int B[][N],int C[][N])
{
   for(int i=0;i<N;i++)
   {
      for(int j=0;j<N;j++)
      {
         C[i][j] = A[i][j] + B[i][j];
      }
   }
}

void printmatrix(int D[][N])
{
  int i,j;
  for(int i=0;i<N;i++)
  {
   for(int j=0;j<N;j++)
   {
    printf("%d",D[i][j]);
   }
  }
}
//37 Multiplying Matrices:
#define N 4

int multiply_matrices(int A[][N],int B[][N],int C[][N])
{
   for(int i=0;i<N;i++)
   {
      for(int j=0;j<N;j++)
      {
         C[i][j] = A[i][j] * B[i][j];
      }
   }
}

//38 Removing Spaces in the string:
//keeping count of non space:

void remove_spaces(char str[100])
{
   int count=0;
   int n =  strlen(str);
     for(int i=0;str[i];i++)
     {
      if(str[i]!=' ')
      {
         str[count++] = str[i];
         str[count]= '\0';
      }
     }
}
//39 Transpose of the Matrix:
#define N 4
void transpose(int A[][N],int B[][N])
{
  for(int i=0;i<N;i++)
  {
   for(int j=0;j<N;j++)
   {
      B[i][j] = A[j][i];
   }
  }
}

//40 Count Sort
#define range 255 
int countSort(int arr[100],int n)
{
    char op[strlen(arr)];

    //creating count array:
     int count[range + 1], i;
    memset(count, 0, sizeof(count));

    for(int i=0;arr[i];++i)
      ++count[arr[i]];
    for(int i=1;i<=range;++i)
      count[i] +=count[i-1];
    for(int i=0;arr[i];++i)
    {
      op[count[arr[i]]-1] = arr[i];
      --count[arr[i]];
    }
    for(int i=0;arr[i];i++)
        arr[i] = op[i];

}
//Merge sort:
void merge(int arr[],int l,int m,int r)
{
   int i,j,k;
   int n1 = m-l+1;
   int n2 = r-m;

   int L[n1],R[n2];
   for(int i=0;i<n1;i++)
      L[i] = arr[l+i];
   for(int j=0;j<n2;j++)
      R[j] = arr[m+1+j];

      int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
      if(L[i]<R[j])
      {
        arr[k]=L[i];
        i++;
    }
    else{
      arr[k]=R[j];
      j++;
    }
    k++;

}
while(i<n1)
{
   arr[k]=L[i];
   i++;
   k++;

}
while(j<n2)
{
   arr[k]=R[j];
   j++;
   k++;
}
}
int merge_sort(int arr[100],int l,int r)
{
   if(l<r)
   {
      int m = l + (r-l)/2;

      merge_sort(arr,l,m);
      merge_sort(arr,m+l,r);
      merge(arr,l,m,r);
   }
}

void printarray(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
      printf("%d ",arr[i]);
      printf("\n");
   }
}
//50 Check if 2 strings are rotation or not:
int rotation_strings(char *str1,char *str2)
{
   int n1 = strlen(str1);
   int n2 = strlen(str2);
   char *temp;
   char *ptr;

   if(n1!=n2)
   {
      return 0;
   }
   temp = (char*)malloc(sizeof(char)*(n1*2+1));
   temp[0]=" ";
   strcat(temp,str1);
   strcat(temp,str1);

   ptr = strstr(temp,str2);
   free(str2);
    if(ptr!=NULL)
    {
      return 1;
    }
    else{
      return 0;
    }
}
// THIS IS A DRIVER CODE WHICH ALL PROGRAMS:
int main()
{
    int arr[100], n,i,pos;
   //  char str[100],a,z;
   int a,b,year,result;
   char str1[100],str2[100];
   char str[100];
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the 2 numbers");
    scanf("%d%d",&a,&b);
    printf("Enter the position");
    scanf("%d",&pos);
    printf("Enter the two strings:");
    scanf("%s%s",str1,str2);
     printf("Enter the string");
     scanf("%s",str);
     int result21 = fnon_reapeating(str);
     
    if(anagram(str1,str2,n))
    {
    return 1;
    }
    else{
      return 0;
    }
   //  printf("Enter the string");
   //  scanf("%s",str);
   //  scanf("%d",&n);
   //  printf("Enter the array elements");
   //  for(i=0;i<n;i++)
   //  {
   //    scanf("%d",&arr[i]);
   //  }
   //  printf("Enter the year");
   //   scanf("%d",&year);
   //  int result5 = armrstrong();
   //  reverse_string(a,z);
   //  int result3 = palindrome(str,i);
   //  int result1 = Isprime(n);
   //  int result7 = factorial(n);
      //  repetitive(arr,n);
      //int result12 = gcd(a,b);
      // int result12a = lcm(a,b);
   //int result14 = array_reverse(arr,n,pos);
   //     int result = sqqrt(n);
   //  int result20 = reverse(n);
   // int result17 = leapOrNot(year);
   
   if (result21 == -1) {
        printf("No non-repeating character found.\n");
    } else {
        printf("First non-repeating character is %c index %d.\n",str[result21],result21);
    }

   //  printf("The sqaure of %d is %d",n,result);
   // printf("The result is %d",result5);
   //  printf("The result is %d",result3);
   // printf("The result is: %s\n",str);
   //  printf("The factorial is:%d",result7); //Factorial o/p
   // printf("The revsered array in the given position %d is :",pos);
   //   for(int i=0;i<n;i++)
   //   {
   //    printf("%d ",arr[i]);
   //   }
   // printf("The result17 is %d",result);
   //  return 0;

}
//



  