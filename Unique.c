#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
    int temp =*a;
    *a=*b;
    *b=temp;
}
void sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++){
      for(j=i;j<n-i-1;j++){
        if(a[j]>a[j+1])
        {
            swap(&a[j],&a[j+1]);
        }
      }
    }
}
void print_distinct(int a[],int n)
{
    
    sort(a,n);
    int i;
     for(i=0;i<n;i++)
     {
        while(i<n-1 && a[i]==a[i+1])
        i++;
     }
}

int main()
{
    int a[100],i,n;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    print_distinct(a,n);
    printf("The dintict elements are:\n",a[i]);
}
