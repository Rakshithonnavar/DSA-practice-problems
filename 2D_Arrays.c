//Rotate array by 90 Degrees
#include<stdio.h>
#include<stdlib.h>
# define N 4
// void rotate(int arr[][N], int n) 
// # define R 4
// # define C 4

void rotate_matrix(int a[N][N])
    {
     int i,j,temp;
     for(i=0;i<N/2;i++){
       for(j=i;j<N-i-1;j++){
        temp = a[i][j];
         a[i][j] = a[N-1-j][i];
         a[N-1-j][i] = a[N-1-i][N-1-j];                                                              
         a[N-1-i][N-1-j] = a[j][N-1-i];
         a[j][N-1-i] = temp;
       }  
}
}
int main()
{
     int a[N][N] ,i ,j;
     printf("Enter the Matrix elements");                         //    t=a   a=b   b=c  c =d     d=t
     for (i=0 ; i < N ; ++i){
          for(j=0;j<N;j++){
          scanf("%d",&a[i][j]);  
     }
     }

      rotate_matrix(a);  
     printf("Matrix elements after rotating are:\n");  
    for(i=0;i<N;i++){
     for(j=0;j<N;j++){
        printf("%d\t",a[i][j]);
     }
        printf("\n");
    }
        
     return 0;
}


// Rotate matrix in spiral order
  int spiral_print(int[N][N],int n,int m)
  {
   
          int i,k=0,l=0;
          while(k<m && l<n)
          {
               for(i=1;i<n;i++)
               {
                    printf("%d",a[k][i]);
               }
               k++;
          }
        
  }


                                                                