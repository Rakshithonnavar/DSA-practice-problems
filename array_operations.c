#include<stdio.h>
#include<stdlib.h>

int main()
{  
    //Inserting element in an array

    int a[100], pos,elem,n,i,search,found=0;
    char choice;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Enter the element to be inserted:");
    scanf("%d",&elem);
    printf("Enter the position u want to insert:");
    scanf("%d",&pos);
    if(pos<1||pos>n+1)
    {
        printf("Invalid position");
        return 1;
    }
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
        
    }
    a[pos-1]=elem;
    n++;
    printf("The updated array is:");
         for(i=0;i<n;i++)
         {
            printf("%d\t",a[i]);
             
         }
        
         printf("\nDo you want delete any element (Y/N)?");
         
          scanf(" %c",&choice);
             if(choice=='Y'||choice=='y')
             {
                printf("Enter the postion of Element to be deleted ");
                scanf("%d",&pos);
                for(i=pos-1;i<n-1;i++)
                {
                    a[i]=a[i+1];    //main part
                }
                 n--;
                 
       printf("The updated array after deleting the element is:\n");
          for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
           }

             }else if (choice=='N'|| choice=='n')
             {
                printf("You choose to exit!");
             }
              else{
                printf("Invalid option");
              }
              printf("\nThe array element to be searched ");
                scanf("%d",&search);
                for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            found=1;
            break;
        }
    }
           if(found==1)
           {
            printf("Element %d found in the position %d",search,i);
           }
        else{
            printf("Element %d not found!!",search);
           }
           return 0;

             
             
        
    
     
    




    // int a[100],i,n,search,found=0;
    // printf("Enter the number of elements \n");
    //     scanf("%d",&n);
    // printf("Enter the array elements \n");
    // for(i=0;i<n;i++){
    // scanf("%d",&a[i]);
    // }
    // printf("The array element to be searched \n");
    //  scanf("%d",&search);
     
    // for(i=0;i<n;i++)
    // {
    //     if(a[i]==search)
    //     {
    //         found=1;
    //         break;
    //     }
    // }
    //        if(found==1)
    //        {
    //         printf("Element %d found in the position %d",search,i);
    //        }
    //     else{
    //         printf("Element %d not found!!",search);
    //     }
    //     return 0;
    
      
}