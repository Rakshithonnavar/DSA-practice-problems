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
            int index=0;
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


































