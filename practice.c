#include<stdio.h>
#include<stdlib.h>
// int main()
// {
// int m,n;
// printf("Enter the numbers");
// scanf("%d%d",&m,&n);
// while(m!=n){
// if(m>n)
// {
//     m=m-n;
// }
// else{
//     n=n-m;
// }
// }
// printf("%d",m);
// return 0;
// }


//Program to change Decimal number to Binary
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[64], i = 0;
    long long n, num;
    printf("Enter a non-negative number to be converted (max 64 bits)\n");
    if (scanf("%lld", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    if (n == 0) {
        printf("Binary of the given number is: 0\n");
        return 0;
    }
    num = n;
    while (num > 0 && i < 64)
    {
        a[i++] = num % 2;
        num /= 2;
    }
    printf("Binary of the given number is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    printf("\n");
    return 0;
}
