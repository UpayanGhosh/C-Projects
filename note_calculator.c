#include <stdio.h>
int main()
{
    int c,h,f,t,amount;
    printf("Enter the amount");
    scanf("%d", &c);
    amount=c;
    h=c/100;
    amount=amount-(h*100);
    f=amount/50;
    amount=amount-(f*50);
    t=amount/10;
    printf("%d",h);
    printf("Hundread notes\n");
    printf("%d",f);
    printf("Fifty notes\n");
    printf("%d",t);
    printf("Ten notes\n");
    getch();
    return 0;
}