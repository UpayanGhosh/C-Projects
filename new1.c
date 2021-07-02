#include <stdio.h>
int main()
{
    int n,num,zero=0;
    // printf("Enter the number of numbers to follow");
    // scanf("%d",&n);
    printf("Enter the number to calculate the number of zeros");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        zero=zero+num/5;
        num=num/5;
        if(num<5)
        break;
    }
    printf("%d",zero);
    return 0;
}