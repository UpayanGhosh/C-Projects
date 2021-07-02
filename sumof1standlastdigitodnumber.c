#include <stdio.h>
int main()
{
    int num,sum=0,n,r;
    printf("Enter a number");
    scanf("%d", &num);
    n=num%10;
    while(num!=0)
    {
    r=num%10;
    num=num/10;
    }
    printf("%d", r);
    sum=n+r;
    printf("The sum of 1st and last digits of your number is %d",sum);
    return 0;
}
