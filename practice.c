#include<stdio.h>
#include<stdlib.h>
int main()
{
int m,n;
printf("Enter the numbers");
scanf("%d%d",&m,&n);
while(m!=n){
if(m>n)
{
    m=m-n;
}
else{
    n=n-m;
}
}
printf("%d",m);
return 0;
}


//Program to change Decimal number to Binary
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10],n,i;
    printf("Enter the number to be converted");
    scanf("%d",&n);
    for(int i=0;n>0;i++)
    {
        a[i] = n%2;
        n/=2;
    }
    printf("Binary of the given number is:");

        for(i=i-1;i>=0;i--)
        {
            printf("&a[i]");
        } 
}
