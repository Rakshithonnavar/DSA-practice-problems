#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("hi");
}
// int pairsum(int a[], int n, int sum)
// {
// 	int count = 0;
// 	for (int i = 0; i < n; i++)
// 		for (int j = i + 1; j < n; j++)
// 			if (a[i] + a[j] == sum){
//           printf("The pair is :(%d,%d)\n",a[i],a[j]);
// }
//   printf("Their sum is : %d",sum);
// }


// int main()
// {
   
// 	int a[] = { 2,-1,4,1,-5,8,0,67 };
// 	int n = sizeof(a) / sizeof(a[0]);
// 	int sum = 3;
// 	pairsum(a, n, sum);
// 	return 0;
// }
  
   





/*int main() {
    int arr[] = { 2,-1,4,1,-5,8,0,67};
    int targetSum = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Pairs with sum %d:\n", targetSum);
    findPairs(arr, size, targetSum);

    return 0;
}

























/*int pairsum(int a[],int size,int sum){
    int i,j;
    int* table = malloc(sizeof(int));

    for ( i = 0; i <size; i++)
    {
        int temp = sum -a[i];
        if(temp>=0 && table[temp] == 1){
            printf("Pair found:%d +%d =%d\n",temp,a[i],sum);
        }
        table[a[i]] =1;
    }
     free(table);
    
}
 int main(){
    int sum,size;
    int a[] = {2,-1,4,1,-5,8,0,67};
    sum=3;
    size =sizeof(a)/sizeof(a[0]);
    printf("Pairs with sum %d:\n",sum);
    pairsum(a,size,sum);
     return 0;

 }*/
