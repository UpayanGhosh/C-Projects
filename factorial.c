#include <stdio.h>
int main()
{
    int a, factorial = 1, i;
    printf("Enter the number");
    scanf("%d", &a);
    for (i = a; i > 0; i--)
    {
        factorial = factorial * i;
    }
    printf("The value of factorial is %d", factorial);
    return 0;
}