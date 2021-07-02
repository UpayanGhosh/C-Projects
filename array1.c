#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10}, num,flag;
    printf("Enter the element to be searched");
    scanf("%d", &num);
    for(int i=0; i<=10; i++)
    {
        if(arr[i]==num)
        {
        flag=1;
        break;
        }
        else
        flag=0;
    }
    if(flag==1)
    printf("Present");
    else
    printf("Not present");
    return 0;
}