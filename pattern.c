#include <stdio.h>
int main()
{ int n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    { int j;
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        //printf("\n");

        for(j=n;j>=i; j--)
        {   
            printf("#");
        }
    //printf("#");
    printf("\n");
    }
    return 0;
}