#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{

  
int a[100],i,n,low,high,key,mid,pos=-1;
printf("Enter the number of elements ");
scanf("%d",&n);
printf("Enter the elements ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter key elem to be searched ");
scanf("%d",&key);
low = 0;
high = n - 1;
while(low<=high)
{
   mid=(low+high)/2;

if(a[mid]==key)
   {
    pos=mid;
    break;
   }
else if(a[mid]>key)
{
  high=mid-1;
}
else{
  low=mid+1;
}
}
if(pos!=-1)
{
   printf("element found! in position %d",pos);
}
else{
  printf("element not found");
}
return 0;
// scanf("%d",&elem);
// scanf("%d",&pos);
// if(pos<1 ||pos>n+1)
// {
//     printf("Invalid position\n");
// }
// else
// {
//      for(i=n-1;i>=pos-1;i--)
//      {
//         a[i+1]=a[i];
//      }
//      a[pos-1]=elem;
//      n++;
// }
// printf("The updated array is  \n");
// for(i=0;i<n;i++)
// {
//    printf("%d\t",a[i]);
// }

// scanf("%d",&pos);
// for(i=pos-1;i<n-1;i++){
//    a[i]=a[i+1];
// }
// n--;

// printf("The updated array after deletion of elem is  \n");
// for(i=0;i<n;i++)
// {
//    printf("%d\t",a[i]);
// }
// printf("Enter the element to be searched ");
//   scanf("%d",&search);
//   for(i=0;i<n-1;i++)
//   {
// if(a[i]==search)
// {
//     found=1;
//     break;
// }
//   }
//   if(found==1)
//   {
//     printf("Element found!");
//   }
//   else{
//     printf("Element not found!");
//   }

}