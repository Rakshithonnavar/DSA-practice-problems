#include<stdlib.h>
#include<stdio.h>
void right_rotate(int a[], int n, int outofplace);

void negetive_positive(int a[],int n)
{
    int outofplace=-1;

    for(int index=0;index<n;index++)
    {
        if(outofplace>=0)
        {
            if(((a[index]>=0)&&(a[outofplace]<0))||((a[index]<0)&&(a[outofplace]>=0)))
                right_rotate(a,n,outofplace);

                if(index - outofplace>=2)
                   outofplace = outofplace + 2;
                else 
                   outofplace = -1;
                
        }
    }
        if(outofplace==-1)
        {
            int index;
            if(((a[index]>=0)&&(!(index & 0x01)))
                || ((a[index] < 0) && (index & 0x01))) {
                outofplace = index;
        } 
    }
}

void right_rotate(int a[],int n,int outofplace)
{
    int cur = outofplace;
    char temp = a[cur];
    for(int i=cur;i> outofplace;i--)
     a[i] = a[i-1];
     a[outofplace] = temp;
}
int main()
{
    int a[100],n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
    negetive_positive(a,n);
    printf("The array elements after sorting are ");
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
    }
    return 0;
}


































// int fun(int arr[], int l, int h)
// {
//     int min = 0; // Initialize 'min' to a large value
//     if (l + arr[l] < h)
//     {
//         int y = fun(arr, l + arr[l], h);
//         min = y + 1;
//     }
//     return min;
// }
// int main()
// {
//     int l = 0, h = 10;
//     int arr[] = {1,3,5,8,-2,9,10,4,7,6};
//     int c = 0;
//     c= fun(arr, l, h);
//     printf("value of min = %d", c);
//     return 0;
// }