#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number upto which u want to find the sum of natural numbers");
    scanf("%d", &num);
    // sum=num*(num+1);
    // sum=sum/2;
    while(num>0)
    {
        sum=sum+num;
        num--;
    }
    printf("The sum is %d", sum);
    return 0;
}