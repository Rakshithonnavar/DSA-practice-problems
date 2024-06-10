#include<stdlib.h>
#include<stdio.h>
#include<math.h>
// 1)Using temporary array by d bits 
void rotate_array(int a[100],int d,int n)
{
    int temp[n],i,k=0;
    for(i=d;i<n;i++)
    {
       temp[k]=a[i];
       k++;
    }
    for(i=0;i<d;i++)
    {
        temp[k]=a[i];
        k++;
    }
    for(i=0;i<n;i++)
    {
        a[i]=temp[i];
    }
}
int main()
{
   int a[100],i,n,d;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter rotations to be performed:");
    scanf("%d",&d);
    rotate_array(a,d,n);
    printf("The array after rotating is:");
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
}


// 2) Jugling Algorithm
  void leftRotate(int a[],int n,int k)
    {
        int i,j,temp,d,g;
          g=gcd(n,k);
         for(i=0;i<g;i++)
         {
            temp=a[i];
            j=i;
            while(1)
            {
                d=j+k;
                if(d>=n)
                  d=d-n;
                if(d==i)
                   break;
              a[j]=a[d];
              j=d;
            }
            a[j]=temp;
         }
   }
      int gcd(int a,int b)
          {
              if(a%b==0)
              return b;
              return (b,a%b);   
          }
    int main()
{
    int a[100], i,n,k;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter no of rotations to be performed:");
    scanf("%d",&k);
    leftRotate(a,n,k);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;

// }
// 3)rotate array one by one 

    // int main()
    // {
      
    // int a[100],i,n,last,temp=1,d;
    // printf("Enter the no of elements:");
    // scanf("%d",&n);
    // printf("Enter the array elements:");
    //     for(i=0;i<n;i++){
    // scanf("%d",&a[i]);
    //     }
    // printf("Enter no of rotations to be performed:");
    // scanf("%d",&d);
    //   while(temp<=d){
    //   int last = a[0];
    //   for(i=0;i<n-1;i++)
    //   {
    //     a[i]=a[i+1];
    //   }
        
    //   a[n-1] = last;
    //      temp++;
    // }    
    // printf("The rotated array is:\n");
    // {
    //   for(i=0;i<n;i++)
    //   {
    //     printf("%d\t",a[i]);
    //   }
    // }
    // return 0;
    // }
    
   






   


          
    
              
          



























