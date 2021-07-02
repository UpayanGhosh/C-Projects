#include<stdio.h>
int main()
{
    float p,c,b,m,co;
    float percent;
    scanf("%f %f %f %f %f",&p,&c,&m,&b,&co);
    percent=(p+c+m+b+co)/5.0;
    printf("%.2f\n",percent);
    if(percent>=90)
    {
        printf("A\n");
    }
    else if(percent>=80)
    {
          printf("B\n");
    }
    else if(percent>=70)
    {
          printf("C\n");
    }
    else if(percent>=60)
    {
          printf("D\n");
    }
    else if(percent>=40)
    {
         printf("E\n") ;
    }
    else
    {
          printf("F\n");
    }
    return 0;
}