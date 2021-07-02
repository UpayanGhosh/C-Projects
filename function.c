#include <stdio.h>
int sum(int a,int b);
int main()
{
    int n1,n2,result=0;
    printf("Enter any two numbers");
    scanf("%d%d", &n1,&n2);
    result=sum(n1,n2);
    printf("The sum is %d",result);
    return 0;
}
sum(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}