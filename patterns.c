#include<stdlib.h>
#include<stdio.h>

// int main()
// {
//     int n,m=1,k;
//     printf("Enter the number of rows:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=1;j<=i-1;j++)
//         {
//             printf("");
//         }
//         for(k=1;k<=m;k++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//             m++;
//     }
//  return 0;
// }
//Sqaure pattern
// int main()
// {
//     printf("Enter the number of rows:");
//     int l;
//     scanf("%d",&l);
//     for(int i=0;i<l;i++)
//     {
//         for(int j=0;j<l;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//Hollow square pattern
int main()
{
    printf("Enter number of rows:");
    int l,i;
    scanf("%d",&l);
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++)
        {
            if(i==0 ||i==l-1||j==0||j==l-1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}






