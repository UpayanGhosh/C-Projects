#include <stdio.h>
int main()
{
    int num,t,n1,sum=0,factorial;
    printf("Enter the number");
    scanf("%d", &num);
    t=num;
    while(t!=0)
    {
        n1=t%10;
        factorial=1;
        for(int i=2;i<=n1;i++)
        {   
            factorial=factorial*i;
        }
    sum=sum+factorial;
    t=t/10;
    }
    if(sum==num)
    printf("krishnamurthy number");
    else
    printf("error");
    return 0;
}