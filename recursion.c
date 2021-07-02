#include <stdio.h>
int factorial(int x);
int main()
{
    int n;
    printf("Enter a number to calculate its factorial");
    scanf("%d", &n);
    factorial(n);
    printf("The factorial of %d is %d",n,factorial(n));
    return 0;
}
factorial(int x){
    if(x==1 || x==0)
    return 1;
    else
    return x*factorial(x-1);
}