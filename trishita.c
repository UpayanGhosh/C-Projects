#include <stdio.h>
int main()
{   int num;
    printf("Enter any nymber");
    scanf("%d", &num);
    for(int i=1;i<=num*5;i++)
    {
        if(i%num==0)
        printf("%d",i);
    }
    return 0;
}