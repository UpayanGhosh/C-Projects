#include <stdio.h>
int triangular(int n);
int main()
{
    int num,result;
    printf("Enter the number to check ");
    scanf("%d",&num);
    result=triangular(num);
    if(result==num)
    printf("1");
    else
    printf("0");
    return 0;
}
triangular(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+i;
        if(sum==n)
        break;
    }
    return sum;
}
