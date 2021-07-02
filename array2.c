#include <stdio.h>
int main()
{   int n,m=1;
    printf("Enter the number of elements you want to input");
    scanf("%d",&n);
    int arr[70];
    for(int i=0;i<=n;i++)
    {
        printf("Enter %d element",m);
        scanf("%d",&arr[m]);
    }
    printf("%d",arr[70]);
    return 0;
}