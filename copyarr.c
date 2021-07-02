#include <stdio.h>
int main()
{
    int a[70],n;
    printf("Enter the maximum element of the array");
    scanf("%d",&n);
    printf("|Enter the elements of the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}