#include<stdio.h>
int main()
{
    int m[20],n,i,a,g,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&m[i]);
    scanf("%d",&a);
    for(i=1;i<=n;i++)
    {
        if(m[i]==a)
        {
            g=m[i];
            y=i;
        }

    }
    printf("%d\n",a);
    printf("%d\n",y);
    return 0;
}