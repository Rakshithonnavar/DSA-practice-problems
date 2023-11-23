#include<stdio.h>
#include<stdlib.h>

int MissingNum(int a[], int n) {

    for (int i = 0; i < n; i++) {
        if (a[i] <= 0) {
            a[i] = -1;
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        int index = abs(a[i]) - 1;
        if (index < n && a[index] > 0) {
            a[index] = -a[index];
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            return i + 1;
        }
    }
    
    
    return n + 1;
}



int main() {
    int a[100],N;
    printf("Enter the no of  elements");
     scanf("%d",&N);
    printf("Enter the array elements");    
       for (int i = 0;i<N; i++){
        scanf("%d",&a[i]);
       }        
    //int a[] = {4,7,-1,8,90,1,3,2,6};
    int n = sizeof(a) / sizeof(a[0]);
    int firstMiss = MissingNum(a, n);
    printf("1st missing positive number is %d\n", firstMiss);
    return 0;
}




















/*int MissingNum(int a[],int n)
{
    int temp[n+1];
    for(int i=0;i<=n;i++){
        temp[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        temp[a[i] - 1] =1;
    }
    int value;
    for(int i=0;i<=n;i++){
        if(temp[i] == 0)
          value = i+1;
    }
    printf("The missing number is %d",value);
}

int main()
{
    int a[] = {4,7,-1,8,90,1,3,2,6};
    int n = sizeof(a)/sizeof(a[0]);
    MissingNum(a,n);
}*/