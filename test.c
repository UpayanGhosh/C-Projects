#include <stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char s1[20],s2[20];
    scanf("%s%s",s1,s2);
    if(strlen(s1)==strlen(s2))
    {
        for(int i=0;i<strlen(s1);i++)
        {
            if(s1[i]==s2[i])
            count++;
        }
        if(count==0)
        printf("not same");
        else
        printf("same");
    }
    else
    printf("not same");
    return 0;
}