#include <stdio.h>
int main()
{
    int num, flag;
    printf("Enter any number");
    scanf("%d", &num);
    for(int i=2;i<num;i++)
    {
        if(num%2==0)
        flag=0;
        else
        flag=1;
    }
    if(flag==0)
    printf("The number is not a prime number");
    else
    if(flag==1)
    printf("The number is a prime number");
    return 0;
}