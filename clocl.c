#include <stdio.h>
#include<windows.h>
int main()
{
    int h=0,m=0,s=0;
    int d=1000;
    if(h>12||m>60||s>60)
    {
        printf("Error ! \n");
        exit(0);
    }
    while(1)
    {
        s++;
        if(s>59)
        {
           m++;
           s=0; 
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",h,m,s);
        Sleep(d);
        //system("cls");
    }
    return 0;
}