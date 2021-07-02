#include <stdio.h>
int main()
{
    int arr[69]={10,11,12,13,14,15,16,17,18,19,20};
    int a,i;
    printf("Enter the element to be searched");
    scanf("%d",&a);
    for (i=0;i<=11;i++)
    {
        //printf("%d", a);
        if(arr[i]==a)
        {
            printf("The element is present");
            break;
        }
    }
    if(i>11)
    printf("The element is not present");
    return 0;
}
