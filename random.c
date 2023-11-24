#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
int a[100],i,n,pos,elem,found=0,search;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&elem);
scanf("%d",&pos);
if(pos<1 ||pos>n+1)
{
    printf("Invalid position\n");
}
else
{
     for(i=n-1;i>=pos-1;i--)
     {
        a[i+1]=a[i];
     }
     a[pos-1]=elem;
     n++;
}
printf("The updated array is  \n");
for(i=0;i<n;i++)
{
   printf("%d\t",a[i]);
}

scanf("%d",&pos);
for(i=pos-1;i<n-1;i++){
   a[i]=a[i+1];
}
n--;

printf("The updated array after deletion of elem is  \n");
for(i=0;i<n;i++)
{
   printf("%d\t",a[i]);
}
printf("Enter the element to be searched ");
  scanf("%d",&search);
  for(i=0;i<n-1;i++)
  {
if(a[i]==search)
{
    found=1;
    break;
}
  }
  if(found==1)
  {
    printf("Element found!");
  }
  else{
    printf("Element not found!");
  }
}