#include<stdio.h>
int main(void) 
{
    int n,i,j;
    printf("Enter a motherfucking number\n");
    scanf("%d",&n);
    printf("Nicher pattern ta gare dhokai\n");
    for(i=1;i<=(2*n)-1;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=(2*n)-1;j++)
            {
                if(j<=n)
                {
                    if(j>=i)
                        printf("%d",j);
                    else
                        printf(" ");
                }
                else
                {
                    if((2*n)-j>=i)
                        printf("%d",(2*n)-j);
                    else
                        printf(" ");
                }
            }
            
        }
        else
        {
            for(j=1;j<=(2*n)-1;j++)
            {
                if(j<=n)
                {
                    if((2*n)-i>j)
                    printf(" ");
                    else
                    printf("%d",j);

                } 
                else
                {
                    if(i<j)
                        printf(" ");
                    else
                        printf("%d",(2*n)-j);
                }
            } 
        } printf("\n");
    }


    return 0;
}