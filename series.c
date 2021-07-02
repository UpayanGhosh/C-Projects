#include<stdio.h>
int main()
{
    printf("Hey There!!!\n");
    int a,b,c;
    printf("Enter any three number :: ");
    scanf("%d %d %d",&a,&b,&c);
    if((2*b)==(a+c))
    {
        printf("%d %d %d is in AP series",a,b,c);
    }
    else if((b*b==(a*c)))
    {
        printf("%d %d %d is in GP series",a,b,c);
    }
    else
    {
        printf("It seems that %d %d %d don't belong to AP or GP series",a,b,c);
    }

    return 0;
}