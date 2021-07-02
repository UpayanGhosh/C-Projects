#include <stdio.h>
int main()
{
    int num,ans=1;
    printf("Enter the number who's table you want to know");
    scanf("%d", &num);
    for(int i=10; i>=1; i--)
    {
        ans=num*i;
        printf("%d * %d = %d\n",num,i,ans);
    }
    return 0;
}