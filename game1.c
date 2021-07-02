#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess,attempt=1,lvl;
    srand(time(0));
    num=rand()%100+1;
    printf("A random number is generated between 1 to 100\n");
    printf("Choose difficulty level\n1.Normal\n2.Medium\n3.Hard\n");
    scanf("%d",&lvl);
    if(lvl==1)
    {   printf("You have 10 attempts\n");
        do{
            if(attempt==1)
               {
                   printf("Guess the number!!!\n");
                   printf("The first digit of the number is <=%d\n", num/10+5);
                    printf("The last digit of the number is <=%d\n", num%10);
               }
            else
                printf("GUESS AGAIN!!!\n");
            scanf("%d", &guess);
            if(num<guess)
            printf("Lower number please\n");
            else
            if(num>guess)
            printf("Higher number please\n");
            else
            printf("You guessed the number in %d attempts.\n", attempt);
            attempt++;

        }while(attempt<=10 && guess!=num);
         printf("Attempt exceeds\n");
         printf("The number is %d\n", num);
    }
    else
    if(lvl==2)
        {   printf("You have 5 attempts\n");
            do{
                if(attempt==1)
                    {
                        printf("Guess the number!!!\n");
                         printf("The first digit of the number is <=%d\n", num/10+5);
                        printf("The last digit of the number is <=%d\n", num%10);
                    }
                else
                    printf("GUESS AGAIN!!!\n");
                scanf("%d", &guess);
                if(num<guess)
                printf("Lower number please\n");
                else
                if(num>guess)
                printf("Higher number please\n");
                else
                printf("You guessed the number in %d attempts.\n", attempt);
                attempt++;

            }while(attempt<=5 && guess!=num);
             printf("Attempt exceeds\n");
            printf("The number is %d", num);
        }
    else
    if(lvl==3)
        {   printf("You have 3 attempts\n");
            do{
            if(attempt==1)
                {
                    printf("Guess the number!!!\n");
                     printf("The first digit of the number is <=%d\n", num/10+5);
                    printf("The last digit of the number is <=%d", num%10);
                }
            else
            printf("GUESS AGAIN!!!\n");
            scanf("%d", &guess);
            if(num<guess)
            printf("Lower number please\n");
            else
            if(num>guess)
            printf("Higher number please\n");
            else
            printf("You guessed the number in %d attempts.\n", attempt);
            attempt++;

            }while(attempt<=3 && guess!=num);
            printf("Attempt exceeds\n");
            printf("The number is %d", num);
            
        }
    getch();
    return 0;
}