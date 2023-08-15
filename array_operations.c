#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],i,n,search,found=0;
    printf("Enter the number of elements \n");
        scanf("%d",&n);
    printf("Enter the array elements \n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("The array element to be searched \n");
     scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            found=1;
            break;
        }
           if(found==1)
           {
            printf("Element %d found in the position %d");
           }
        else{
            printf("Element %d not found!!");
        }
        return 0;
    }
      
}