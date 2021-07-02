#include <stdio.h>
int main()
{
   
    long  t,n,i,j;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        int zero=0;
        scanf("%ld",&t);
         //checking
        for (j= 0; j <t; j++)
        {  
            zero=zero+t/5;
            t=t/5;
            if(t<5)
            break;
            
        }
    printf("%ld\n",zero);
    }
   
    return 0;
}