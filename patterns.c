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
//int main()
// {
//     printf("Enter number of rows:");
//     int l,i;
//     scanf("%d",&l);
//     for(int i=0;i<l;i++){
//         for(int j=0;j<l;j++)
//         {
//             if(i==0 ||i==l-1||j==0||j==l-1)
//             {
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Rhombus star pattern print
// int main()
// {
//     int i,l;
//     printf("Enter the number of rows:");
//     scanf("%d",&l);
//     for(int i=0;i<l;i++) //take cre of rows
//     {
//         for(int j=0;j<i;j++) //take care iof spaces
//         {
//              printf("*"); 
//         }
//         for(int j=0;j<l;j++) //take care of stars
//         {
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Rectangle star pattern:
// int main()
// {
//     int i,j,r,c;
//     printf("Enter the number of rows:");
//     scanf("%d",&r);
//     printf("Enter the number of columns:");
//     scanf("%d",&c);
//     for(int i=0;i<r;i++) // row for rectangle
//     {
//       for(int j=0;j<c;j++) //column for rectangle printing stars
//       {
//         printf("* ");
//        }
//        printf("\n");
//       }
//           return 0;
//     }

//Hollow rectangle star pattern
// int main()
// {
//     int rows, cols, i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);
//     for(i = 0; i < rows; i++) // take care of the rows 
//     {
//         for(j = 0; j < cols; j++) // take care of the columns for printing stars
//         {
//             if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Parallelogram star pattern
// int main()
// {
//     int r,c;
//     printf("Enter the number of rows:");
//     scanf("%d",&r);
//     printf("Enter the number of columns:");
//     scanf("%d",&c);
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             printf("  ");
//         }
//         for(int j=0;j<c;j++)
//         {
//             printf("* ");
//          }
//          printf("\n");  
//         }
//         return 0;
//     }

    //mirrored parahllelogram star pattern
    // int main()
    // {
    // int r,c;
    // printf("Enter the number of rows:");
    // scanf("%d",&r);
    // printf("Enter the number of columns:");
    // scanf("%d",&c);
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<r-i-1;j++)
    //     {
    //         printf("  ");
    //     }
    //     for(int j=0;j<c;j++)
    //     {
    //         printf("* ");
    //      }
    //      printf("\n");
    // }
    // return 0;
    // }

    //Right triangle star pattern
    // int main()
    // {
    //     int r;
    //     printf("Enter the number of rows:");
    //     scanf("%d",&r);
    //     for(int i=0;i<r;i++)//rows
    //     {
    //         for(int j=0;j<=i;j++)
    //         {
    //             printf("* ");
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }
    //inverted right triangle star pattern
//    int main()
//    {
//     int  r;
//     printf("Enter the number of rows:");
//     scanf("%d",&r);
//     for(int i=0;i<r;i++){
//         for(int j=0;j<=r-i-1;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
//    }

   //Pyramid star pattern
//    int main()
//    {
//     int r;
//     printf("Enter the number of rows:");
//     scanf("%d",&r);
//     for(int i=0;i<r;i++){
//         for(int j=0; j<r-i-1;j++)
//         {
//             printf("  ");
//         }
//         for(int k=0;k<2*i-1;k++)
//         {
//             printf("* ");
//          }
//          printf("\n");
//         }
//         return 0;
//     }

//Hollow pyramid star pattern
// int main()
// {
//     int r;
//     printf("Enter the number of rows:");
//     scanf("%d",&r);
//     for(int i=0;i<r;i++){ //take care of rows
//         for(int j=0;j<r-i-1;j++)
//         {
//             printf("  "); //take care of spaces
//         }
//         for(int k=0;k<2*i-1;k++)
//         {
//             if(i==0||i==r-1||k==0||k==2*i-2)
//             {
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
   
//Inverted hollow pyramid star pattern
int main()
{
    printf("Enter the number of rows:");
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++){ //rows 
        for(int j=0;j<i;j++)
        {
            printf("");
        }
        for(int k=0;k<2*r-i-1;k++)
        {
            if(i==0||i==r-1||k==0||k==2*r-2*i-2)
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











