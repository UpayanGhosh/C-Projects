#include <stdio.h>
int main()
{
    int num,sum=0,n;
    printf("Enter a number");
    scanf("%d", &num);
    while(num!=0)
    {
    n=num%10;
    sum=sum+n;
    num=num/10;
    }
    printf("The sum of individual digits of your number is %d",sum);
    return 0;
}
