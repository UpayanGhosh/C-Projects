#include <stdio.h>
int main()
{
    int number, n;
    printf("Enter your number");
    scanf("%d", &number);
    if(number%2==0)
        printf("Even Number");
    else
    if(number%2==1)
        printf("Odd number");
    else
    printf("Error");    
    return 0;
}