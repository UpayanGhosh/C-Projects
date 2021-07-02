#include <stdio.h>
int main()
{
    int number;
    printf("Enter your number");
    scanf("%d", &number);
    if(number<0)
     {   printf("Your number is negetive");
     }
    else 
    if(number>0)
      {  printf("Your number is positive");
      }
    else
    if(number==0)
       { printf("Your number is zero");
       }
    else 
    printf("Error");   
    return 0;
}