#include <stdio.h>
int main()
{
    int n,j=1,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i==1)
        {
            for(int j=1;j<=5;j++)
            printf("%d ",j);
            t=j;
        }
        else
        if(i==2)
        {
            for(int j=10;j>=6;j--)
            printf("%d ",j);
        }
        else
        if(i%2!=0 && i!=0)
        {
            for(j=5+j;j<=j+10;j++)
            printf("%d ",j+1);
            t=j;
            
        }
        else
        if(i%2==0 && i!=0)
        {
          
            for(j=j+5;j>=j+1;j--)
            printf("%d ",j);
            j=j+10;
        }
        j=t;
        if(i%2==0 && i!=0)
        j=j+5;
        printf("\n");
    }
    return 0;
}