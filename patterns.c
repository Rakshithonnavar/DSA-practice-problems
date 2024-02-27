#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n,m=1,k;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf("");
        }
        for(k=1;k<=m;k++)
            {
                printf("*");
            }
            printf("\n");
            m++;
    }
 return 0;
}

//Priting star pattern
int main()
{
    printf("Jai Shree Ram!\t");
return 0;
}


