#include<stdio.h>
int main()
{
    int n,sum;
    printf("1+2+3+.......+n\n");
    printf("Enter the value of N:");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("The sum is %d",sum);
}