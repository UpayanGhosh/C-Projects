#include <stdio.h>
int main()
{
    int n1,n2,sum1=0,sum2=0;
    printf("Enter any two numbers");
    scanf("%d%d", &n1,&n2);
    for (int i = 1; i <n1; ++i) {
        if (n1 % i == 0) {
            sum1=sum1+i;
        }
    }
    for (int j = 1; j <n2; ++j) {
        if (n2 % j == 0) {
            sum2=sum2+j;
        }
    }
if(sum1==n2 && sum2==n1)
{
    printf("Amicable Number");
}
else
printf("Not a Amicable Number");
    return 0;
}