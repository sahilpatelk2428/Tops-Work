#include<stdio.h>
#include<string.h>

int main()
{
    char guess[20];

    do
    {
        printf("Guess the song: ");
        scanf("%s",guess);

        if(strcmp(guess,"Believer")!=0)
        {
            printf("Wrong Guess!\n");
        }

    }while(strcmp(guess,"Believer")!=0);

    printf("Correct Song!");
}
