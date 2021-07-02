#include <stdio.h>
#include<conio.h>
void amstrng(int arr[],int m);
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
    amstrng(a,n);
    getch();
     return 0;
}
void amstrng(int arr[],int m)
{
    int i=0, temp, sum=0, rem, c=0;
        for(i=0; i<m; i++)
        {
              sum=0;
              temp=arr[i];
              while(arr[i]!=0)
              {
                      rem=arr[i]%10;
                      sum=sum+rem*rem*rem;
                      arr[i]=arr[i]/10;
               }
               if(temp==sum)
               {
                       c++;
              }
        }
        printf("\nTotal armstrng no is: %d ",c);
}