#include <stdio.h>
int main()
{
    int N1,N2;
    printf("Enter first number");
    scanf("%d", &N1);
    printf("Enter second number");
    scanf("%d", &N2);
    if(N1-N2<0)
        printf("%d",N2);
    else
    if(N1-N2>0)
        printf("%d",N1);
    return 0;
}