//This file cotains of recursion related problems.
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<string.h>
int subsetSum(int arr[100],int n)
{
     
}

//Combination  sum equal to the target element without reapeating sequence elements in array:
int combination(int index,int sum,int k,int ans,int n,int arr[])
{     int res=0;
      if(sum==k)
        return 1;
      if(index==n||sum>k)
         return 0;
      int  store=0,n,arr[n];
        //base case 
      for(int i=index;i<n;i++)
      {  
        if(i>index && arr[i]==arr[i-1])
           continue;
           res+= combination(i+1,sum+arr[i],k,arr,ans,n);    
      }
      return res;
}