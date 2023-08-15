#include<stdio.h>
#include<stdlib.h>

int solve(int *arr,int n)
{
    
     int i,ans=INT_MAX;
    int max =arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)max=arr[i];
    }
    int helper[max+1];
for ( i = 0; i < n; i++)helper[i]=0;
{
    /* code */
}


    for (int i = 0; i <n; i++)
    {
        helper[arr[i]]++;
    }
    for ( int i = 0; i <n; i++)
    {
       if(helper[arr[i]]>1)
    {
        ans=arr[i];
        break;
    }
    }
       return ans;
    
}
int main()
{
    int arr[] ={1,2,3,4,5,6,7,8};
    printf("%d",solve(arr,8));

    return 0;
}
