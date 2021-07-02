#include <stdio.h>
int main()
{
    int num,r,sum=0;
    printf("Enter a number");
    scanf("%d", &num);
    while(num!=0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    printf("The reverse of the number is %d", sum);
    return 0;
}