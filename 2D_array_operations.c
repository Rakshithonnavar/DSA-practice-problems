//Rotate array by 90 Degrees
#include<stdio.h>
#include<stdlib.h>
// # define N 4
// void rotate(int arr[][N], int n) 
// # define R 4
// # define C 4

// void rotate_matrix(int a[N][N])
//     {
//      int i,j,temp;
//      for(i=0;i<N/2;i++){
//        for(j=i;j<N-i-1;j++){
//         temp = a[i][j];
//          a[i][j] = a[N-1-j][i];
//          a[N-1-j][i] = a[N-1-i][N-1-j];                                                              
//          a[N-1-i][N-1-j] = a[j][N-1-i];
//          a[j][N-1-i] = temp;
//        }  
// }
// }
// int main()
// {
//      int a[N][N] ,i ,j;
//      printf("Enter the Matrix elements");                         //    t=a   a=b   b=c  c =d     d=t
//      for (i=0 ; i < N ; ++i){
//           for(j=0;j<N;j++){
//           scanf("%d",&a[i][j]);  
//      }
//      }

//       rotate_matrix(a);  
//      printf("Matrix elements after rotating are:\n");  
//     for(i=0;i<N;i++){
//      for(j=0;j<N;j++){
//         printf("%d\t",a[i][j]);
//      }
//         printf("\n");
//     }
        
//      return 0;
// }


// Rotate matrix in spiral order
//   void spiral_print(int a[N][N])
//   {
          
//           int i,k=0,l=0,m,n;
//           m=n=N; 
//           while(k<m && l<n)
//           {
//                for(i=1;i<n;i++)
//                {
//                     printf("%d",a[k][i]);
//                }
//                k++;
//           }

//           for(i=k;i<m;i++)
//           {
//                printf("%d",a[i][n-1]);
//           }
//            n--;

//            if(k<m){
//                for(i=n-1;i>=l;--i)
//                {
//                     printf("%d",a[m-1][i]);
//                }
//                m--;
//            }

//            if(l<n)
//            {
//                for(i=m-1;i>=k;--i)
//                {
//                     printf("%d",a[i][l]);
//                }
//                l++;
//            }
//   }
  // int main()
  // {
  //    int a[N][N] ,i ,j;
  //    printf("Enter the Matrix elements");                         
     // for (i=0 ; i < N ; ++i){
     //      for(j=0;j<N;j++){
     //      scanf("%d",&a[i][j]);  
     // }
     // }
  //    printf("The Matrix elements after performing spiral rotation are:");
  //     spiral_print(a);
  //      return 0;
  // }

// void missing(int a[],int n)
// {
// int i;

//      int sum;
//      sum = (n+1)*(n+2)/2;
//      for(i=0;i<n;i++)
//      {
//        sum-=a[i];
//      }

//       printf("The missing number is: %d\n",sum);
// }

// int main()
// {
//      int a[100],i,n,sum;
//      printf("Enter the size:");
//      scanf("%d",&n);
//      printf("Enter array elements:");
//         for(i=0;i<n;i++)
//         {
//           scanf("%d",&a[i]);
//         }
//         missing(a,n);
//         return 0;   
// }
//Find element in rotated array
// int findRotate(int** a,int n,int m,int k)
// {      
//       // int  m = sizeof(a)/sizeof(a[0]);
//        for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<m;j++){
//               if(a[n][m]==k)
//                return i*m+j;
//            }
//        }
//        return -1;
// }

// int main() {
//     int n, m, target;
//     scanf("%d", &n);
//     scanf("%d", &m);

//     int a[100][100];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     scanf("%d", &target);

//     int result = findRotate((int**)a, n, m, target);

//     if (result != -1) {
//         printf("The element is found at position: %d\n", result);
//     } else {
//         printf("Element not found!\n");
//     }

//     return 0;
// }
//Factorial of a number

int Factorial(int n)
{    

    return (n==0)? 1: n*(Factorial(n-1));
}


int main()
{  
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n<0)
    {
     printf("please enter a non negetive number");
    }
    else{
    int result = Factorial(n);
    printf("The factorial is %d",result);
    }
    return 0;
}
        
        
        









                                                                
